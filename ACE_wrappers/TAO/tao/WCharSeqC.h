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
// .\be\be_codegen.cpp:150

#ifndef _TAO_PIDL_WCHARSEQC_AIAUY4_H_
#define _TAO_PIDL_WCHARSEQC_AIAUY4_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TAO_Export.h"
#include "tao/Basic_Types.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 0 || TAO_BETA_VERSION != 4
#error This file should be regenerated with TAO_IDL from version 2.0a
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:41

namespace CORBA
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/sequence_ch.cpp:100

#if !defined (_CORBA_WCHARSEQ_CH_)
#define _CORBA_WCHARSEQ_CH_

  class WCharSeq;

  typedef
    ::TAO_FixedSeq_Var_T<
        WCharSeq
      >
    WCharSeq_var;

  typedef
    ::TAO_Seq_Out_T<
        WCharSeq
      >
    WCharSeq_out;

  class TAO_Export WCharSeq
    : public
        ::TAO::unbounded_value_sequence<
            ::CORBA::WChar
          >
  {
  public:
    WCharSeq (void);
    WCharSeq ( ::CORBA::ULong max);
    WCharSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::WChar* buffer, 
      ::CORBA::Boolean release = false);
    WCharSeq (const WCharSeq &);
    virtual ~WCharSeq (void);
    

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef WCharSeq_var _var_type;
    typedef WCharSeq_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module CORBA

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class Arg_Traits< ::CORBA::WCharSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::CORBA::WCharSeq,
            TAO::Any_Insert_Policy_AnyTypeCode_Adapter
          >
  {
  };
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from 
// .\be\be_visitor_template_export.cpp:40

#if defined ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION_EXPORT
  template class TAO_Export ::TAO::unbounded_value_sequence<
      ::CORBA::WChar
    >;
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION_EXPORT */

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/cdr_op_ch.cpp:61

#if !defined _TAO_CDR_OP_CORBA_WCharSeq_H_
#define _TAO_CDR_OP_CORBA_WCharSeq_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CORBA::WCharSeq &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CORBA::WCharSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_CORBA_WCharSeq_H_ */

// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* ifndef */

