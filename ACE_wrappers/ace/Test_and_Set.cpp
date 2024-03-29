// $Id: Test_and_Set.cpp 14 2007-02-01 15:49:12Z mitza $

#ifndef ACE_TEST_AND_SET_CPP
#define ACE_TEST_AND_SET_CPP

#include "ace/Test_and_Set.h"
#include "ace/Guard_T.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

template <class ACE_LOCK, class TYPE>
ACE_Test_and_Set<ACE_LOCK, TYPE>::ACE_Test_and_Set (TYPE initial_value)
  : is_set_ (initial_value)
{
}

// Returns true if we are done, else false.
template <class ACE_LOCK, class TYPE> TYPE
ACE_Test_and_Set<ACE_LOCK, TYPE>::is_set (void) const
{
  ACE_GUARD_RETURN (ACE_LOCK, ace_mon, (ACE_LOCK &) this->lock_, this->is_set_);
  return this->is_set_;
}

// Sets the <is_set_> status.
template <class ACE_LOCK, class TYPE> TYPE
ACE_Test_and_Set<ACE_LOCK, TYPE>::set (TYPE status)
{
  ACE_GUARD_RETURN (ACE_LOCK, ace_mon, this->lock_, this->is_set_);
  TYPE o_status = this->is_set_;
  this->is_set_ = status;
  return o_status;
}

template <class ACE_LOCK, class TYPE> int
ACE_Test_and_Set<ACE_LOCK, TYPE>::handle_signal (int, siginfo_t *, ucontext_t *)
{
  // By setting this to 1, we are "signaling" to anyone calling
  // <is_set> or or <set> that the "test and set" object is in the
  // "signaled" state, i.e., it's "available" to be set back to 0.
  this->set (1);
  return 0;
}

ACE_END_VERSIONED_NAMESPACE_DECL

#endif /* ACE_TEST_AND_SET_CPP */
