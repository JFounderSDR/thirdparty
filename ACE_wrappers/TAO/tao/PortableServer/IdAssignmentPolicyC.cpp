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


#include "IdAssignmentPolicyC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for PortableServer::IdAssignmentPolicy.

PortableServer::IdAssignmentPolicy_ptr
TAO::Objref_Traits<PortableServer::IdAssignmentPolicy>::duplicate (
    PortableServer::IdAssignmentPolicy_ptr p)
{
  return PortableServer::IdAssignmentPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<PortableServer::IdAssignmentPolicy>::release (
    PortableServer::IdAssignmentPolicy_ptr p)
{
  ::CORBA::release (p);
}

PortableServer::IdAssignmentPolicy_ptr
TAO::Objref_Traits<PortableServer::IdAssignmentPolicy>::nil (void)
{
  return PortableServer::IdAssignmentPolicy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableServer::IdAssignmentPolicy>::marshal (
    const PortableServer::IdAssignmentPolicy_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

PortableServer::IdAssignmentPolicy::IdAssignmentPolicy (void)
{}

PortableServer::IdAssignmentPolicy::~IdAssignmentPolicy (void)
{}

PortableServer::IdAssignmentPolicy_ptr
PortableServer::IdAssignmentPolicy::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return IdAssignmentPolicy::_duplicate (
      dynamic_cast<IdAssignmentPolicy_ptr> (_tao_objref)
    );
}

PortableServer::IdAssignmentPolicy_ptr
PortableServer::IdAssignmentPolicy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return IdAssignmentPolicy::_duplicate (
      dynamic_cast<IdAssignmentPolicy_ptr> (_tao_objref)
    );
}

PortableServer::IdAssignmentPolicy_ptr
PortableServer::IdAssignmentPolicy::_nil (void)
{
  return 0;
}

PortableServer::IdAssignmentPolicy_ptr
PortableServer::IdAssignmentPolicy::_duplicate (IdAssignmentPolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableServer::IdAssignmentPolicy::_tao_release (IdAssignmentPolicy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableServer::IdAssignmentPolicy::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableServer/IdAssignmentPolicy:2.3"
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

const char* PortableServer::IdAssignmentPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableServer/IdAssignmentPolicy:2.3";
}

::CORBA::Boolean
PortableServer::IdAssignmentPolicy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_enum/cdr_op_cs.cpp:41



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, PortableServer::IdAssignmentPolicyValue _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, PortableServer::IdAssignmentPolicyValue & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<PortableServer::IdAssignmentPolicyValue> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


