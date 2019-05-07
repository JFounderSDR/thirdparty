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

#ifndef _TAO_PIDL_CONV_FRAMEC_HLYNXO_H_
#define _TAO_PIDL_CONV_FRAMEC_HLYNXO_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "tao/TAO_Export.h"
#include "tao/Basic_Types.h"
#include "tao/Sequence_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/VarOut_T.h"
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

namespace CONV_FRAME
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typedef/typedef_ch.cpp:369

  typedef ::CORBA::ULong CodeSetId;
  typedef ::CORBA::ULong_out CodeSetId_out;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/sequence_ch.cpp:100

#if !defined (_CONV_FRAME_CODESETIDSEQ_CH_)
#define _CONV_FRAME_CODESETIDSEQ_CH_

  class CodeSetIdSeq;

  typedef
    ::TAO_FixedSeq_Var_T<
        CodeSetIdSeq
      >
    CodeSetIdSeq_var;

  typedef
    ::TAO_Seq_Out_T<
        CodeSetIdSeq
      >
    CodeSetIdSeq_out;

  class TAO_Export CodeSetIdSeq
    : public
        ::TAO::unbounded_value_sequence<
            CodeSetId
          >
  {
  public:
    CodeSetIdSeq (void);
    CodeSetIdSeq ( ::CORBA::ULong max);
    CodeSetIdSeq (
      ::CORBA::ULong max,
      ::CORBA::ULong length,
      ::CORBA::ULong* buffer, 
      ::CORBA::Boolean release = false);
    CodeSetIdSeq (const CodeSetIdSeq &);
    virtual ~CodeSetIdSeq (void);
    

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef CodeSetIdSeq_var _var_type;
    typedef CodeSetIdSeq_out _out_type;

    static void _tao_any_destructor (void *);
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct CodeSetComponent;

  typedef
    ::TAO_Var_Var_T<
        CodeSetComponent
      >
    CodeSetComponent_var;
  
  typedef
    ::TAO_Out_T<
        CodeSetComponent
      >
    CodeSetComponent_out;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:49

  struct TAO_Export CodeSetComponent
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef CodeSetComponent_var _var_type;
    typedef CodeSetComponent_out _out_type;

    static void _tao_any_destructor (void *);
    
    CONV_FRAME::CodeSetId native_code_set;
    CONV_FRAME::CodeSetIdSeq conversion_code_sets;
  };

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct CodeSetComponentInfo;

  typedef
    ::TAO_Var_Var_T<
        CodeSetComponentInfo
      >
    CodeSetComponentInfo_var;
  
  typedef
    ::TAO_Out_T<
        CodeSetComponentInfo
      >
    CodeSetComponentInfo_out;

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:49

  struct TAO_Export CodeSetComponentInfo
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef CodeSetComponentInfo_var _var_type;
    typedef CodeSetComponentInfo_out _out_type;

    static void _tao_any_destructor (void *);
    
    CONV_FRAME::CodeSetComponent ForCharData;
    CONV_FRAME::CodeSetComponent ForWcharData;
  };

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module CONV_FRAME

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
  class Arg_Traits< ::CONV_FRAME::CodeSetIdSeq>
    : public
        Var_Size_Arg_Traits_T<
            ::CONV_FRAME::CodeSetIdSeq,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class Arg_Traits< ::CONV_FRAME::CodeSetComponent>
    : public
        Var_Size_Arg_Traits_T<
            ::CONV_FRAME::CodeSetComponent,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class Arg_Traits< ::CONV_FRAME::CodeSetComponentInfo>
    : public
        Var_Size_Arg_Traits_T<
            ::CONV_FRAME::CodeSetComponentInfo,
            TAO::Any_Insert_Policy_Stream
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
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_sequence/cdr_op_ch.cpp:61

#if !defined _TAO_CDR_OP_CONV_FRAME_CodeSetIdSeq_H_
#define _TAO_CDR_OP_CONV_FRAME_CodeSetIdSeq_H_

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


TAO_Export ::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CONV_FRAME::CodeSetIdSeq &_tao_sequence);
TAO_Export ::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CONV_FRAME::CodeSetIdSeq &_tao_sequence);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif /* _TAO_CDR_OP_CONV_FRAME_CodeSetIdSeq_H_ */

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CONV_FRAME::CodeSetComponent &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CONV_FRAME::CodeSetComponent &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const CONV_FRAME::CodeSetComponentInfo &);
TAO_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, CONV_FRAME::CodeSetComponentInfo &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581


TAO_END_VERSIONED_NAMESPACE_DECL

#endif /* ifndef */

