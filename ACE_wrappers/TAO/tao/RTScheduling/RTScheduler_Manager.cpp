// -*- C++ -*-
// $Id: RTScheduler_Manager.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "tao/RTScheduling/RTScheduler_Manager.h"

#if ! defined (__ACE_INLINE__)
#include "tao/RTScheduling/RTScheduler_Manager.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_RTScheduler_Manager::TAO_RTScheduler_Manager (void)
{

}

TAO_RTScheduler_Manager::~TAO_RTScheduler_Manager (void)
{
}

TAO_RTScheduler_Manager_ptr
TAO_RTScheduler_Manager::_narrow (CORBA::Object_ptr obj)
{
  return
    TAO_RTScheduler_Manager::_duplicate (
        dynamic_cast<TAO_RTScheduler_Manager *> (obj)
      );
}

TAO_RTScheduler_Manager_ptr
TAO_RTScheduler_Manager::_duplicate (TAO_RTScheduler_Manager_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

const char*
TAO_RTScheduler_Manager::_interface_repository_id (void) const
{
  return "IDL:RTScheduler_Manager:1.0";
}

TAO_END_VERSIONED_NAMESPACE_DECL
