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


#include "ImplicitActivationPolicyC.h"
#include "tao/CDR.h"
#include "ace/OS_NS_string.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for PortableServer::ImplicitActivationPolicy.

PortableServer::ImplicitActivationPolicy_ptr
TAO::Objref_Traits<PortableServer::ImplicitActivationPolicy>::duplicate (
    PortableServer::ImplicitActivationPolicy_ptr p)
{
  return PortableServer::ImplicitActivationPolicy::_duplicate (p);
}

void
TAO::Objref_Traits<PortableServer::ImplicitActivationPolicy>::release (
    PortableServer::ImplicitActivationPolicy_ptr p)
{
  ::CORBA::release (p);
}

PortableServer::ImplicitActivationPolicy_ptr
TAO::Objref_Traits<PortableServer::ImplicitActivationPolicy>::nil (void)
{
  return PortableServer::ImplicitActivationPolicy::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<PortableServer::ImplicitActivationPolicy>::marshal (
    const PortableServer::ImplicitActivationPolicy_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

PortableServer::ImplicitActivationPolicy::ImplicitActivationPolicy (void)
{}

PortableServer::ImplicitActivationPolicy::~ImplicitActivationPolicy (void)
{}

PortableServer::ImplicitActivationPolicy_ptr
PortableServer::ImplicitActivationPolicy::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ImplicitActivationPolicy::_duplicate (
      dynamic_cast<ImplicitActivationPolicy_ptr> (_tao_objref)
    );
}

PortableServer::ImplicitActivationPolicy_ptr
PortableServer::ImplicitActivationPolicy::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return ImplicitActivationPolicy::_duplicate (
      dynamic_cast<ImplicitActivationPolicy_ptr> (_tao_objref)
    );
}

PortableServer::ImplicitActivationPolicy_ptr
PortableServer::ImplicitActivationPolicy::_nil (void)
{
  return 0;
}

PortableServer::ImplicitActivationPolicy_ptr
PortableServer::ImplicitActivationPolicy::_duplicate (ImplicitActivationPolicy_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
PortableServer::ImplicitActivationPolicy::_tao_release (ImplicitActivationPolicy_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
PortableServer::ImplicitActivationPolicy::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Policy:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/PortableServer/ImplicitActivationPolicy:2.3"
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

const char* PortableServer::ImplicitActivationPolicy::_interface_repository_id (void) const
{
  return "IDL:omg.org/PortableServer/ImplicitActivationPolicy:2.3";
}

::CORBA::Boolean
PortableServer::ImplicitActivationPolicy::marshal (TAO_OutputCDR & /* cdr */)
{
  return false;
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_enum/cdr_op_cs.cpp:41



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (TAO_OutputCDR &strm, PortableServer::ImplicitActivationPolicyValue _tao_enumerator)
{
  return strm << static_cast< ::CORBA::ULong> (_tao_enumerator);
}

::CORBA::Boolean operator>> (TAO_InputCDR &strm, PortableServer::ImplicitActivationPolicyValue & _tao_enumerator)
{
  ::CORBA::ULong _tao_temp = 0;
  ::CORBA::Boolean const _tao_success = strm >> _tao_temp;
  
  if (_tao_success)
    {
      _tao_enumerator = static_cast<PortableServer::ImplicitActivationPolicyValue> (_tao_temp);
    }
  
  return _tao_success;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


