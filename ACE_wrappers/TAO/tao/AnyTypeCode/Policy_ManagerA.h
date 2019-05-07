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
// .\be\be_codegen.cpp:838

#ifndef _TAO_IDL_ANYTYPECODE_POLICY_MANAGERA_NVJGPN_H_
#define _TAO_IDL_ANYTYPECODE_POLICY_MANAGERA_NVJGPN_H_


#include /**/ "tao/AnyTypeCode/TAO_AnyTypeCode_Export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/Policy_ManagerC.h"
#include "tao/AnyTypeCode/PolicyA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:51

namespace CORBA
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_AnyTypeCode_Export ::CORBA::TypeCode_ptr const _tc_PolicyManager;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:78

} // module CORBA


// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CORBA
{
  TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, PolicyManager_ptr); // copying
  TAO_AnyTypeCode_Export void operator<<= ( ::CORBA::Any &, PolicyManager_ptr *); // non-copying
  TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, PolicyManager_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, CORBA::PolicyManager_ptr); // copying
TAO_AnyTypeCode_Export void operator<<= (::CORBA::Any &, CORBA::PolicyManager_ptr *); // non-copying
TAO_AnyTypeCode_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, CORBA::PolicyManager_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */
