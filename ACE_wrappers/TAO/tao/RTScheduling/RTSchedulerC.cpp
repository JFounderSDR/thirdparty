// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0a
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:375


#include "tao/RTScheduling/RTScheduler.h"
#include "tao/CDR.h"
#include "tao/ORB_Core.h"
#include "tao/SystemException.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for RTScheduling::ThreadAction.

RTScheduling::ThreadAction_ptr
TAO::Objref_Traits<RTScheduling::ThreadAction>::duplicate (
    RTScheduling::ThreadAction_ptr p)
{
  return RTScheduling::ThreadAction::_duplicate (p);
}

void
TAO::Objref_Traits<RTScheduling::ThreadAction>::release (
    RTScheduling::ThreadAction_ptr p)
{
  ::CORBA::release (p);
}

RTScheduling::ThreadAction_ptr
TAO::Objref_Traits<RTScheduling::ThreadAction>::nil (void)
{
  return RTScheduling::ThreadAction::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<RTScheduling::ThreadAction>::marshal (
    const RTScheduling::ThreadAction_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

RTScheduling::ThreadAction::ThreadAction (void)
{}

RTScheduling::ThreadAction::~ThreadAction (void)
{}

RTScheduling::ThreadAction_ptr
RTScheduling::ThreadAction::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ThreadAction::_duplicate (
      dynamic_cast<ThreadAction_ptr> (_tao_objref)
    );
}

RTScheduling::ThreadAction_ptr
RTScheduling::ThreadAction::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ThreadAction::_duplicate (
      dynamic_cast<ThreadAction_ptr> (_tao_objref)
    );
}

RTScheduling::ThreadAction_ptr
RTScheduling::ThreadAction::_nil (void)
{
  return 0;
}

RTScheduling::ThreadAction_ptr
RTScheduling::ThreadAction::_duplicate (ThreadAction_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
RTScheduling::ThreadAction::_tao_release (ThreadAction_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
RTScheduling::ThreadAction::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:RTScheduling/ThreadAction:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* RTScheduling::ThreadAction::_interface_repository_id (void) const
{
  return "IDL:RTScheduling/ThreadAction:1.0";
}

::CORBA::Boolean
RTScheduling::ThreadAction::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for RTScheduling::DistributableThread.

RTScheduling::DistributableThread_ptr
TAO::Objref_Traits<RTScheduling::DistributableThread>::duplicate (
    RTScheduling::DistributableThread_ptr p)
{
  return RTScheduling::DistributableThread::_duplicate (p);
}

void
TAO::Objref_Traits<RTScheduling::DistributableThread>::release (
    RTScheduling::DistributableThread_ptr p)
{
  ::CORBA::release (p);
}

RTScheduling::DistributableThread_ptr
TAO::Objref_Traits<RTScheduling::DistributableThread>::nil (void)
{
  return RTScheduling::DistributableThread::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<RTScheduling::DistributableThread>::marshal (
    const RTScheduling::DistributableThread_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

RTScheduling::DistributableThread::DistributableThread (void)
{}

RTScheduling::DistributableThread::~DistributableThread (void)
{}

RTScheduling::DistributableThread_ptr
RTScheduling::DistributableThread::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DistributableThread::_duplicate (
      dynamic_cast<DistributableThread_ptr> (_tao_objref)
    );
}

RTScheduling::DistributableThread_ptr
RTScheduling::DistributableThread::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return DistributableThread::_duplicate (
      dynamic_cast<DistributableThread_ptr> (_tao_objref)
    );
}

RTScheduling::DistributableThread_ptr
RTScheduling::DistributableThread::_nil (void)
{
  return 0;
}

RTScheduling::DistributableThread_ptr
RTScheduling::DistributableThread::_duplicate (DistributableThread_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
RTScheduling::DistributableThread::_tao_release (DistributableThread_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
RTScheduling::DistributableThread::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:RTScheduling/DistributableThread:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* RTScheduling::DistributableThread::_interface_repository_id (void) const
{
  return "IDL:RTScheduling/DistributableThread:1.0";
}

::CORBA::Boolean
RTScheduling::DistributableThread::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for RTScheduling::Current.

RTScheduling::Current_ptr
TAO::Objref_Traits<RTScheduling::Current>::duplicate (
    RTScheduling::Current_ptr p)
{
  return RTScheduling::Current::_duplicate (p);
}

void
TAO::Objref_Traits<RTScheduling::Current>::release (
    RTScheduling::Current_ptr p)
{
  ::CORBA::release (p);
}

RTScheduling::Current_ptr
TAO::Objref_Traits<RTScheduling::Current>::nil (void)
{
  return RTScheduling::Current::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<RTScheduling::Current>::marshal (
    const RTScheduling::Current_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:101

RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::UNSUPPORTED_SCHEDULING_DISCIPLINE (void)
  : ::CORBA::UserException (
        "IDL:RTScheduling/Current/UNSUPPORTED_SCHEDULING_DISCIPLINE:1.0",
        "UNSUPPORTED_SCHEDULING_DISCIPLINE"
      )
{
}

RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::~UNSUPPORTED_SCHEDULING_DISCIPLINE (void)
{
}

RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::UNSUPPORTED_SCHEDULING_DISCIPLINE (const ::RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE&
RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::operator= (const ::RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE *
RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<UNSUPPORTED_SCHEDULING_DISCIPLINE *> (_tao_excp);
}

const RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE *
RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const UNSUPPORTED_SCHEDULING_DISCIPLINE *> (_tao_excp);
}

::CORBA::Exception *RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE, 0);
  return retval;
}

::CORBA::Exception *
RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE (*this),
      0
    );
  return result;
}

void RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::_raise (void) const
{
  throw *this;
}

void RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::_tao_encode (TAO_OutputCDR &) const
{
  throw ::CORBA::MARSHAL ();
}

void RTScheduling::Current::UNSUPPORTED_SCHEDULING_DISCIPLINE::_tao_decode (TAO_InputCDR &)
{
  throw ::CORBA::MARSHAL ();
}



// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_RTSCHEDULING_CURRENT_IDTYPE_CS_)
#define _RTSCHEDULING_CURRENT_IDTYPE_CS_

RTScheduling::Current::IdType::IdType (void)
{}

RTScheduling::Current::IdType::IdType (
    ::CORBA::ULong max)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (max)
{}

RTScheduling::Current::IdType::IdType (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Octet * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      >
    (max, length, buffer, release)
{}

RTScheduling::Current::IdType::IdType (
    const IdType &seq)
  : ::TAO::unbounded_value_sequence<
        ::CORBA::Octet
      > (seq)
{}

RTScheduling::Current::IdType::~IdType (void)
{}

#endif /* end #if !defined */

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/sequence_cs.cpp:65

#if !defined (_RTSCHEDULING_CURRENT_NAMELIST_CS_)
#define _RTSCHEDULING_CURRENT_NAMELIST_CS_

RTScheduling::Current::NameList::NameList (void)
{}

RTScheduling::Current::NameList::NameList (
    ::CORBA::ULong max)
  : ::TAO::unbounded_basic_string_sequence<char> (max)
{}

RTScheduling::Current::NameList::NameList (
    ::CORBA::ULong max,
    ::CORBA::ULong length,
    ::CORBA::Char * * buffer,
    ::CORBA::Boolean release
  )
  : ::TAO::unbounded_basic_string_sequence<char>
    (max, length, buffer, release)
{}

RTScheduling::Current::NameList::NameList (
    const NameList &seq)
  : ::TAO::unbounded_basic_string_sequence<char> (seq)
{}

RTScheduling::Current::NameList::~NameList (void)
{}

#endif /* end #if !defined */

RTScheduling::Current::Current (void)
{}

RTScheduling::Current::~Current (void)
{}

RTScheduling::Current_ptr
RTScheduling::Current::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Current::_duplicate (
      dynamic_cast<Current_ptr> (_tao_objref)
    );
}

RTScheduling::Current_ptr
RTScheduling::Current::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Current::_duplicate (
      dynamic_cast<Current_ptr> (_tao_objref)
    );
}

RTScheduling::Current_ptr
RTScheduling::Current::_nil (void)
{
  return 0;
}

RTScheduling::Current_ptr
RTScheduling::Current::_duplicate (Current_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
RTScheduling::Current::_tao_release (Current_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
RTScheduling::Current::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Current:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/RTCORBA/Current:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:RTScheduling/Current:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* RTScheduling::Current::_interface_repository_id (void) const
{
  return "IDL:RTScheduling/Current:1.0";
}

::CORBA::Boolean
RTScheduling::Current::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for RTScheduling::ResourceManager.

RTScheduling::ResourceManager_ptr
TAO::Objref_Traits<RTScheduling::ResourceManager>::duplicate (
    RTScheduling::ResourceManager_ptr p)
{
  return RTScheduling::ResourceManager::_duplicate (p);
}

void
TAO::Objref_Traits<RTScheduling::ResourceManager>::release (
    RTScheduling::ResourceManager_ptr p)
{
  ::CORBA::release (p);
}

RTScheduling::ResourceManager_ptr
TAO::Objref_Traits<RTScheduling::ResourceManager>::nil (void)
{
  return RTScheduling::ResourceManager::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<RTScheduling::ResourceManager>::marshal (
    const RTScheduling::ResourceManager_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

RTScheduling::ResourceManager::ResourceManager (void)
{}

RTScheduling::ResourceManager::~ResourceManager (void)
{}

RTScheduling::ResourceManager_ptr
RTScheduling::ResourceManager::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ResourceManager::_duplicate (
      dynamic_cast<ResourceManager_ptr> (_tao_objref)
    );
}

RTScheduling::ResourceManager_ptr
RTScheduling::ResourceManager::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ResourceManager::_duplicate (
      dynamic_cast<ResourceManager_ptr> (_tao_objref)
    );
}

RTScheduling::ResourceManager_ptr
RTScheduling::ResourceManager::_nil (void)
{
  return 0;
}

RTScheduling::ResourceManager_ptr
RTScheduling::ResourceManager::_duplicate (ResourceManager_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
RTScheduling::ResourceManager::_tao_release (ResourceManager_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
RTScheduling::ResourceManager::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/RTCORBA/Mutex:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:RTScheduling/ResourceManager:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* RTScheduling::ResourceManager::_interface_repository_id (void) const
{
  return "IDL:RTScheduling/ResourceManager:1.0";
}

::CORBA::Boolean
RTScheduling::ResourceManager::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for RTScheduling::Scheduler.

RTScheduling::Scheduler_ptr
TAO::Objref_Traits<RTScheduling::Scheduler>::duplicate (
    RTScheduling::Scheduler_ptr p)
{
  return RTScheduling::Scheduler::_duplicate (p);
}

void
TAO::Objref_Traits<RTScheduling::Scheduler>::release (
    RTScheduling::Scheduler_ptr p)
{
  ::CORBA::release (p);
}

RTScheduling::Scheduler_ptr
TAO::Objref_Traits<RTScheduling::Scheduler>::nil (void)
{
  return RTScheduling::Scheduler::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<RTScheduling::Scheduler>::marshal (
    const RTScheduling::Scheduler_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:101

RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::INCOMPATIBLE_SCHEDULING_DISCIPLINES (void)
  : ::CORBA::UserException (
        "IDL:RTScheduling/Scheduler/INCOMPATIBLE_SCHEDULING_DISCIPLINES:1.0",
        "INCOMPATIBLE_SCHEDULING_DISCIPLINES"
      )
{
}

RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::~INCOMPATIBLE_SCHEDULING_DISCIPLINES (void)
{
}

RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::INCOMPATIBLE_SCHEDULING_DISCIPLINES (const ::RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES&
RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::operator= (const ::RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  return *this;
}

RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES *
RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<INCOMPATIBLE_SCHEDULING_DISCIPLINES *> (_tao_excp);
}

const RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES *
RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const INCOMPATIBLE_SCHEDULING_DISCIPLINES *> (_tao_excp);
}

::CORBA::Exception *RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES, 0);
  return retval;
}

::CORBA::Exception *
RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES (*this),
      0
    );
  return result;
}

void RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::_raise (void) const
{
  throw *this;
}

void RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::_tao_encode (TAO_OutputCDR &) const
{
  throw ::CORBA::MARSHAL ();
}

void RTScheduling::Scheduler::INCOMPATIBLE_SCHEDULING_DISCIPLINES::_tao_decode (TAO_InputCDR &)
{
  throw ::CORBA::MARSHAL ();
}



RTScheduling::Scheduler::Scheduler (void)
{}

RTScheduling::Scheduler::~Scheduler (void)
{}

RTScheduling::Scheduler_ptr
RTScheduling::Scheduler::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Scheduler::_duplicate (
      dynamic_cast<Scheduler_ptr> (_tao_objref)
    );
}

RTScheduling::Scheduler_ptr
RTScheduling::Scheduler::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return Scheduler::_duplicate (
      dynamic_cast<Scheduler_ptr> (_tao_objref)
    );
}

RTScheduling::Scheduler_ptr
RTScheduling::Scheduler::_nil (void)
{
  return 0;
}

RTScheduling::Scheduler_ptr
RTScheduling::Scheduler::_duplicate (Scheduler_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
RTScheduling::Scheduler::_tao_release (Scheduler_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
RTScheduling::Scheduler::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:RTScheduling/Scheduler:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return false;
    }
}

const char* RTScheduling::Scheduler::_interface_repository_id (void) const
{
  return "IDL:RTScheduling/Scheduler:1.0";
}

::CORBA::Boolean
RTScheduling::Scheduler::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}


TAO_END_VERSIONED_NAMESPACE_DECL

