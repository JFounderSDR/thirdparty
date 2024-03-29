// -*- C++ -*-
//
//$Id: Notification_Strategy.inl 14 2007-02-01 15:49:12Z mitza $

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE ACE_Event_Handler *
ACE_Notification_Strategy::event_handler (void)
{
  return eh_;
}

ACE_INLINE void
ACE_Notification_Strategy::event_handler (ACE_Event_Handler *eh)
{
  this->eh_ = eh;
}

ACE_INLINE ACE_Reactor_Mask
ACE_Notification_Strategy::mask (void) const
{
  return mask_;
}

ACE_INLINE void
ACE_Notification_Strategy::mask (ACE_Reactor_Mask m)
{
  this->mask_ = m;
}

ACE_END_VERSIONED_NAMESPACE_DECL
