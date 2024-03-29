// $Id: Leader_Follower.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "ace/Countdown_Time.h"
#include "ace/OS_NS_sys_time.h"
#include "ace/Reactor.h"

#include "tao/Leader_Follower.h"
#include "tao/LF_Follower_Auto_Ptr.h"
#include "tao/LF_Follower_Auto_Adder.h"
#include "tao/LF_Event_Binder.h"
#include "tao/debug.h"
#include "tao/Transport.h"
#include "tao/GUIResource_Factory.h"
#include "tao/ORB_Core.h"

#if !defined (__ACE_INLINE__)
# include "tao/Leader_Follower.inl"
#endif /* ! __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Leader_Follower::~TAO_Leader_Follower (void)
{
  while (!this->follower_free_list_.is_empty ())
    {
      TAO_LF_Follower *follower = this->follower_free_list_.pop_front ();
      delete follower;
    }
  // Hand the reactor back to the resource factory.
  // use GUI reactor factory if available
  if ( this->orb_core_->gui_resource_factory () )
    this->orb_core_->gui_resource_factory ()->reclaim_reactor (this->reactor_);
  else
    this->orb_core_->resource_factory ()->reclaim_reactor (this->reactor_);

  this->reactor_ = 0;
}

TAO_LF_Follower *
TAO_Leader_Follower::allocate_follower (void)
{
  if (!this->follower_free_list_.is_empty ())
    return this->follower_free_list_.pop_front ();

  TAO_LF_Follower* ptr = 0;
  ACE_NEW_RETURN (ptr,
                  TAO_LF_Follower (*this),
                  0);
  return ptr;
}

void
TAO_Leader_Follower::release_follower (TAO_LF_Follower *follower)
{
  this->follower_free_list_.push_front (follower);
}

int
TAO_Leader_Follower::elect_new_leader_i (void)
{
  TAO_LF_Follower* const follower = this->follower_set_.head ();

#if defined (TAO_DEBUG_LEADER_FOLLOWER)
  ACE_DEBUG ((LM_DEBUG,
              "TAO (%P|%t) - TAO_Leader_Follower::elect_new_leader_i - "
              "follower is %@\n",
              follower));
#endif /* TAO_DEBUG_LEADER_FOLLOWER */

  return follower->signal ();
}

int
TAO_Leader_Follower::wait_for_client_leader_to_complete (ACE_Time_Value *max_wait_time)
{
  int result = 0;
  ACE_Countdown_Time countdown (max_wait_time);

  // Note that we are waiting.
  ++this->event_loop_threads_waiting_;

  while (this->client_thread_is_leader_ && result != -1)
    {
      if (max_wait_time == 0)
        {
          if (this->event_loop_threads_condition_.wait () == -1)
            {
              ACE_ERROR ((LM_ERROR,
                          ACE_TEXT ("TAO (%P|%t) - TAO_Leader_Follower::")
                          ACE_TEXT ("wait_for_client_leader_to_complete - ")
                          ACE_TEXT ("Condition variable wait failed\n")));

              result = -1;
            }
        }
      else
        {
          countdown.update ();
          ACE_Time_Value tv = ACE_OS::gettimeofday ();
          tv += *max_wait_time;
          if (this->event_loop_threads_condition_.wait (&tv) == -1)
            {
              if (errno != ETIME)
                ACE_ERROR ((LM_ERROR,
                            ACE_TEXT ("TAO (%P|%t) - TAO_Leader_Follower::")
                            ACE_TEXT ("wait_for_client_leader_to_complete - ")
                            ACE_TEXT ("Condition variable wait failed\n")));

              result = -1;
            }
        }
    }

  // Reset waiting state.
  --this->event_loop_threads_waiting_;

  return result;
}

ACE_Reactor *
TAO_Leader_Follower::reactor (void)
{
  if (this->reactor_ == 0)
    {
      ACE_GUARD_RETURN (TAO_SYNCH_MUTEX, ace_mon, this->lock (), 0);
      if (this->reactor_ == 0)
        {
          // use GUI reactor factory if available
          if ( this->orb_core_->gui_resource_factory () )
            this->reactor_ =
              this->orb_core_->gui_resource_factory ()->get_reactor ();
          else
            this->reactor_ =
              this->orb_core_->resource_factory ()->get_reactor ();
        }
    }
  return this->reactor_;
}

void
TAO_Leader_Follower::set_client_thread (void)
{
  // If we were a leader thread or an event loop thread, give up
  // leadership.
  TAO_ORB_Core_TSS_Resources *tss = this->get_tss_resources ();
  if (tss->event_loop_thread_ ||
      tss->client_leader_thread_)
    {
      --this->leaders_;
    }

  if (this->clients_ == 0 &&
      this->orb_core_->has_shutdown () &&
      !this->orb_core_->resource_factory ()->drop_replies_during_shutdown ())
    {
      // The ORB has shutdown and we are the first client after
      // that. This means that the reactor is disabled, we must
      // re-enable it if we want to receive any replys...
      this->orb_core_->reactor ()->reset_reactor_event_loop ();
    }
  ++this->clients_;
}

void
TAO_Leader_Follower::reset_client_thread (void)
{
  // If we were a leader thread or an event loop thread, take back
  // leadership.
  TAO_ORB_Core_TSS_Resources *tss = this->get_tss_resources ();
  if (tss->event_loop_thread_ ||
      tss->client_leader_thread_)
    {
      ++this->leaders_;
    }

  --this->clients_;
  if (this->clients_ == 0 &&
      this->orb_core_->has_shutdown ())
    {
      // The ORB has shutdown and we are the last client thread, we
      // must stop the reactor to ensure that any server threads go
      // away.
      this->orb_core_->reactor ()->end_reactor_event_loop ();
    }
}

int
TAO_Leader_Follower::wait_for_event (TAO_LF_Event *event,
                                     TAO_Transport *transport,
                                     ACE_Time_Value *max_wait_time)
{
  // Obtain the lock.
  ACE_GUARD_RETURN (TAO_SYNCH_MUTEX, ace_mon, this->lock (), -1);

  ACE_Countdown_Time countdown (max_wait_time);

  // Optimize the first iteration [no access to errno]
  int result = 1;

  // For some cases the transport may disappear like when waiting for
  // connection to be initiated or closed. So cache the id.
  // @@ NOTE: This is not completely safe either. We will be fine for
  // cases that don't access the id ie. when debug level is off but
  // with debugging level on we are on a sticky wicket. Hopefully none
  // of our users should run TAO with debugging enabled like they did
  // in PathFinder
  size_t t_id = 0;

  if (TAO_debug_level && transport != 0)
    {
      t_id = transport->id ();
    }

  {
    // Calls this->set_client_thread () on construction and
    // this->reset_client_thread () on destruction.
    TAO_LF_Client_Thread_Helper client_thread_helper (*this);
    ACE_UNUSED_ARG (client_thread_helper);

    // Check if there is a leader.  Note that it cannot be us since we
    // gave up our leadership when we became a client.
    if (this->leader_available ())
      {
        // = Wait as a follower.

        // Grab a follower:
        TAO_LF_Follower_Auto_Ptr follower (*this);
        if (follower.get () == 0)
          return -1;

        if (TAO_debug_level >= 5)
          ACE_DEBUG ((LM_DEBUG,
                      "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event,"
                      " (follower), cond <%@>\n",
                      t_id, follower.get ()));

        // Bound the follower and the LF_Event, this is important to
        // get a signal when the event terminates
        TAO_LF_Event_Binder event_binder (event, follower.get ());

        while (event->keep_waiting () &&
               this->leader_available ())
          {
            // Add ourselves to the list, do it everytime we wake up
            // from the CV loop. Because:
            //
            // - The leader thread could have elected us as the new
            // leader.
            // - Before we can assume the role another thread becomes
            // the leader
            // - But our condition variable could have been removed
            // already, if we don't add it again we will never wake
            // up.
            //
            // Notice that we can have spurious wake ups, in that case
            // adding the leader results in an error, that must be
            // ignored.
            // You may be thinking of not removing the condition
            // variable in the code that sends the signal, but
            // removing it here, that does not work either, in that
            // case the condition variable may be used twice:
            //
            //  - Wake up because its reply arrived
            //  - Wake up because it must become the leader
            //
            // but only the first one has any effect, so the leader is
            // lost.
            TAO_LF_Follower_Auto_Adder auto_adder (*this, follower);

            if (max_wait_time == 0)
              {
                if (follower->wait (max_wait_time) == -1)
                  {
                    if (TAO_debug_level >= 5)
                      ACE_DEBUG ((LM_DEBUG,
                                  "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event, "
                                  " (follower) [no timer, cond failed]\n",
                                  t_id));

                    // @@ Michael: What is our error handling in this case?
                    //             We could be elected as leader and
                    //             no leader would come in?
                    return -1;
                  }
              }
            else
              {
                countdown.update ();
                ACE_Time_Value tv = ACE_OS::gettimeofday ();
                tv += *max_wait_time;
                if (follower->wait (&tv) == -1)
                  {
                    if (TAO_debug_level >= 5)
                      ACE_DEBUG ((LM_DEBUG,
                                  "TAO (%P|%t) - Leader_Follower[%d]::wait, "
                                  "(follower) [has timer, follower failed]\n",
                                  t_id ));

                    // If we have timedout set the state in the
                    // LF_Event. We call the non-locking,
                    // no-signalling method on LF_Event.
                    if (errno == ETIME)
                        // We have timedout
                        event->set_state (TAO_LF_Event::LFS_TIMEOUT);

                    if (!event->successful ())
                      {
                        // Remove follower can fail because either
                        // 1) the condition was satisfied (i.e. reply
                        //    received or queue drained), or
                        // 2) somebody elected us as leader, or
                        // 3) the connection got closed.
                        //
                        // Therefore:
                        // If remove_follower fails and the condition
                        // was not satisfied, we know that we got
                        // elected as a leader.
                        // But we got a timeout, so we cannot become
                        // the leader, therefore, we have to select a
                        // new leader.
                        //

                        if (this->elect_new_leader () == -1
                            && TAO_debug_level > 0)
                          {
                            ACE_ERROR ((LM_ERROR,
                                        "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event, "
                                        "elect_new_leader failed\n",
                                        t_id ));
                          }
                      }


                    return -1;
                  }
              }
          }

        countdown.update ();

        // @@ Michael: This is an old comment why we do not want to
        //             remove the follower here.
        // We should not remove the follower here, we *must* remove it when
        // we signal it so the same condition is not signalled for
        // both wake up as a follower and as the next leader.

        if (TAO_debug_level >= 5)
          ACE_DEBUG ((LM_DEBUG,
                      "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event,"
                      " done (follower), successful %d\n",
                      t_id,
                      event->successful ()));

        // Now somebody woke us up to become a leader or to handle our
        // input. We are already removed from the follower queue.

        if (event->successful ())
          return 0;

        if (event->error_detected ())
          return -1;

        // FALLTHROUGH
        // We only get here if we woke up but the reply is not
        // complete yet, time to assume the leader role....
        // i.e. ACE_ASSERT (event->successful () == 0);
      }

    // = Leader Code.

    // The only way to reach this point is if we must become the
    // leader, because there is no leader or we have to update to a
    // leader or we are doing nested upcalls in this case we do
    // increase the refcount on the leader in TAO_ORB_Core.

    // Calls this->set_client_leader_thread () on
    // construction and this->reset_client_leader_thread ()
    // on destruction.  Note that this may increase the refcount of
    // the leader.
    TAO_LF_Client_Leader_Thread_Helper client_leader_thread_helper (*this);
    ACE_UNUSED_ARG (client_leader_thread_helper);

    {
      ACE_GUARD_RETURN (ACE_Reverse_Lock<TAO_SYNCH_MUTEX>, rev_mon,
                        this->reverse_lock (), -1);

      // Become owner of the reactor.
      ACE_Reactor *reactor = this->reactor_;
      reactor->owner (ACE_Thread::self ());

      // Run the reactor event loop.
      if (TAO_debug_level >= 5)
        ACE_DEBUG ((LM_DEBUG,
                    "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event,"
                    " (leader) enter reactor event loop\n",
                    t_id));

      // If we got our event, no need to run the event loop any
      // further.
      while (event->keep_waiting ())
        {
          // Run the event loop.
          result = reactor->handle_events (max_wait_time);

          // Did we timeout? If so, stop running the loop.
          if (result == 0 &&
              max_wait_time != 0 &&
              *max_wait_time == ACE_Time_Value::zero)
            break;

          // Other errors? If so, stop running the loop.
          if (result == -1)
            break;

          // Otherwise, keep going...
        }

      if (TAO_debug_level >= 5)
        ACE_DEBUG ((LM_DEBUG,
                    "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event,"
                    " (leader) exit reactor event loop\n",
                    t_id));
    }
  }
  //
  // End artificial scope for auto_ptr like helpers calling:
  // this->reset_client_thread () and (maybe)
  // this->reset_client_leader_thread ().
  //

  // Wake up the next leader, we cannot do that in handle_input,
  // because the woken up thread would try to get into handle_events,
  // which is at the time in handle_input still occupied. But do it
  // before checking the error in <result>, even if there is an error
  // in our input we should continue running the loop in another
  // thread.

  if (this->elect_new_leader () == -1)
    ACE_ERROR_RETURN ((LM_ERROR,
                       "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event,"
                       " failed to elect new leader\n",
                       t_id),
                      -1);

  if (result == -1 && !this->reactor_->reactor_event_loop_done ())
    ACE_ERROR_RETURN ((LM_ERROR,
                       "TAO (%P|%t) - Leader_Follower[%d]::wait_for_event,"
                       " handle_events failed\n",
                       t_id),
                      -1);

  // Return an error if there was a problem receiving the reply...
  if (max_wait_time != 0)
    {
      if (!event->successful ()
          && *max_wait_time == ACE_Time_Value::zero)
        {
          result = -1;
          errno = ETIME;
        }
      else if (event->error_detected ())
        {
          // If the time did not expire yet, but we get a failure,
          // e.g. the connections closed, we should still return an error.
          result = -1;
        }
    }
  else
    {
      /**
       * There should be no reason to reset the value of result
       * here. If there was an error in handle_events () that the
       * leader saw, I (Bala) believe it should be propagated to the
       * clients.
       * result = 0;
       */
      if (event->error_detected ())
        {
          result = -1;
        }
    }

  return result;
}

TAO_END_VERSIONED_NAMESPACE_DECL
