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

#ifndef _TAO_IDL_TAO_EXTA_RVT6LX_H_
#define _TAO_IDL_TAO_EXTA_RVT6LX_H_


#include /**/ "tao/Messaging/messaging_export.h"
#include "tao/AnyTypeCode/Any.h"

#include "tao/Messaging/TAO_ExtC.h"
#include "tao/AnyTypeCode/PolicyA.h"
#include "tao/AnyTypeCode/TimeBaseA.h"


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:51

namespace TAO
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_ConnectionTimeoutPolicy;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_BufferingConstraintMode;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_BufferingConstraint;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_Messaging_Export ::CORBA::TypeCode_ptr const _tc_BufferingConstraintPolicy;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:78

} // module TAO


// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace TAO
{
  TAO_Messaging_Export void operator<<= (::CORBA::Any &, const ::TAO::BufferingConstraint &); // copying version
  TAO_Messaging_Export void operator<<= (::CORBA::Any &, ::TAO::BufferingConstraint*); // noncopying version
  TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::TAO::BufferingConstraint *&); // deprecated
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::TAO::BufferingConstraint *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Messaging_Export void operator<<= (::CORBA::Any &, const TAO::BufferingConstraint &); // copying version
TAO_Messaging_Export void operator<<= (::CORBA::Any &, TAO::BufferingConstraint*); // noncopying version
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, TAO::BufferingConstraint *&); // deprecated
TAO_Messaging_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const TAO::BufferingConstraint *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

TAO_END_VERSIONED_NAMESPACE_DECL



#endif /* ifndef */
