// -*- C++ -*-
//
// $Id: PolicyC.h 935 2008-12-10 21:47:27Z mitza $

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:153

#ifndef _TAO_IDL_ORIG_POLICYC_H_
#define _TAO_IDL_ORIG_POLICYC_H_

#include /**/ "ace/pre.h"


#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "tao/TAO_Export.h"
#include "tao/ORB.h"
#include "tao/Environment.h"
#include "tao/Object.h"
#include "tao/Objref_VarOut_T.h"

#include "tao/UShortSeqC.h"
#include "tao/CurrentC.h"
#include "tao/Policy_ForwardC.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Export

#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// TAO_IDL - Generated from
// be\be_visitor_root/root_ch.cpp:62

namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:48

namespace CORBA
{

  // TAO_IDL - Generated from
  // be\be_visitor_typedef/typedef_ch.cpp:379

  typedef CORBA::Short PolicyErrorCode;
  typedef CORBA::Short_out PolicyErrorCode_out;

  // TAO_IDL - Generated from
  // be\be_visitor_constant/constant_ch.cpp:52

  const CORBA::PolicyErrorCode BAD_POLICY = 0;

  // TAO_IDL - Generated from
  // be\be_visitor_constant/constant_ch.cpp:52

  const CORBA::PolicyErrorCode UNSUPPORTED_POLICY = 1;

  // TAO_IDL - Generated from
  // be\be_visitor_constant/constant_ch.cpp:52

  const CORBA::PolicyErrorCode BAD_POLICY_TYPE = 2;

  // TAO_IDL - Generated from
  // be\be_visitor_constant/constant_ch.cpp:52

  const CORBA::PolicyErrorCode BAD_POLICY_VALUE = 3;

  // TAO_IDL - Generated from
  // be\be_visitor_constant/constant_ch.cpp:52

  const CORBA::PolicyErrorCode UNSUPPORTED_POLICY_VALUE = 4;

  // TAO_IDL - Generated from
  // be\be_visitor_exception/exception_ch.cpp:53

#if !defined (_CORBA_POLICYERROR_CH_)
#define _CORBA_POLICYERROR_CH_

  class TAO_Export PolicyError : public CORBA::UserException
  {
  public:

    CORBA::PolicyErrorCode reason;
    PolicyError (void);
    PolicyError (const PolicyError &);
    ~PolicyError (void);

    PolicyError &operator= (const PolicyError &);

    static void _tao_any_destructor (void *);

    static PolicyError *_downcast (CORBA::Exception *);
    static const PolicyError *_downcast (CORBA::Exception const *);

    static CORBA::Exception *_alloc (void);

    virtual CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (
        TAO_OutputCDR &

      ) const;

    virtual void _tao_decode (
        TAO_InputCDR &

      );

    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ctor.cpp:66

    PolicyError (
        ::CORBA::PolicyErrorCode _tao_reason
      );

    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:129

    virtual CORBA::TypeCode_ptr _tao_type (void) const;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_exception/exception_ch.cpp:53

#if !defined (_CORBA_INVALIDPOLICIES_CH_)
#define _CORBA_INVALIDPOLICIES_CH_

  class TAO_Export InvalidPolicies : public CORBA::UserException
  {
  public:

    CORBA::UShortSeq indices;
    InvalidPolicies (void);
    InvalidPolicies (const InvalidPolicies &);
    ~InvalidPolicies (void);

    InvalidPolicies &operator= (const InvalidPolicies &);

    static void _tao_any_destructor (void *);

    static InvalidPolicies *_downcast (CORBA::Exception *);
    static const InvalidPolicies *_downcast (CORBA::Exception const *);

    static CORBA::Exception *_alloc (void);

    virtual CORBA::Exception *_tao_duplicate (void) const;

    virtual void _raise (void) const;

    virtual void _tao_encode (
        TAO_OutputCDR &

      ) const;

    virtual void _tao_decode (
        TAO_InputCDR &

      );

    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ctor.cpp:66

    InvalidPolicies (
        const ::CORBA::UShortSeq & _tao_indices
      );

    // TAO_IDL - Generated from
    // be\be_visitor_exception/exception_ch.cpp:129

    virtual CORBA::TypeCode_ptr _tao_type (void) const;
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_interface.cpp:598

#if !defined (_CORBA_POLICY__VAR_OUT_CH_)
#define _CORBA_POLICY__VAR_OUT_CH_

  class Policy;
  typedef Policy *Policy_ptr;

  typedef
    TAO_Objref_Var_T<
        Policy
      >
    Policy_var;

  typedef
    TAO_Objref_Out_T<
        Policy
      >
    Policy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be\be_visitor_interface/interface_ch.cpp:54

#if !defined (_CORBA_POLICY_CH_)
#define _CORBA_POLICY_CH_

  class TAO_Export Policy
    : public virtual CORBA::Object
  {
  public:
    friend class TAO::Narrow_Utils<Policy>;
    typedef Policy_ptr _ptr_type;
    typedef Policy_var _var_type;
    typedef Policy_out _out_type;

    // The static operations.
    static Policy_ptr _duplicate (Policy_ptr obj);

    static void _tao_release (Policy_ptr obj);

    static Policy_ptr _narrow (
        CORBA::Object_ptr obj

      );

    static Policy_ptr _unchecked_narrow (
        CORBA::Object_ptr obj

      );

    static Policy_ptr _nil (void)
    {
      return static_cast<Policy_ptr> (0);
    }

    static void _tao_any_destructor (void *);

    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46

    virtual CORBA::PolicyType policy_type (
        void
      );

    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46

    virtual ::CORBA::Policy_ptr copy (
        void
      );

    // TAO_IDL - Generated from
    // be\be_visitor_operation/operation_ch.cpp:46

    virtual void destroy (
        void
      );

    // TAO_IDL - Generated from
    // be\be_visitor_interface/interface_ch.cpp:210

    virtual CORBA::Boolean _is_a (
        const char *type_id

      );

    virtual const char* _interface_repository_id (void) const;
    virtual CORBA::Boolean marshal (TAO_OutputCDR &cdr);

    // Handcrafted
    // ****************************************************************
    virtual CORBA::Boolean _tao_encode (TAO_OutputCDR &);
    virtual CORBA::Boolean _tao_decode (TAO_InputCDR &);
    virtual TAO_Cached_Policy_Type _tao_cached_type (void) const;
    virtual TAO_Policy_Scope _tao_scope (void) const;
    // ****************************************************************

  private:
    TAO::Collocation_Proxy_Broker *the_TAO_Policy_Proxy_Broker_;

  protected:
    // Concrete interface only.
    Policy (void);

    // These methods travese the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void CORBA_Policy_setup_collocation (void);

    // Concrete non-local interface only.
    Policy (
        IOP::IOR *ior,
        TAO_ORB_Core *orb_core
      );

    // Non-local interface only.
    Policy (
        TAO_Stub *objref,
        CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0
      );

    virtual ~Policy (void);

  private:
    // Private and unimplemented for concrete interfaces.
    Policy (const Policy &);

    void operator= (const Policy &);
  };

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:66

} // module CORBA

// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// be\be_visitor_root/root.cpp:139

extern TAO_Export
TAO::Collocation_Proxy_Broker *
(*CORBA__TAO_Policy_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  );

// TAO_IDL - Generated from
// be\be_visitor_traits.cpp:61

// Traits specializations.
namespace TAO
{

#if !defined (_CORBA_POLICY__TRAITS_)
#define _CORBA_POLICY__TRAITS_

  template<>
  struct TAO_Export Objref_Traits< ::CORBA::Policy>
  {
    static ::CORBA::Policy_ptr duplicate (
        ::CORBA::Policy_ptr
      );
    static void release (
        ::CORBA::Policy_ptr
      );
    static ::CORBA::Policy_ptr nil (void);
    static CORBA::Boolean marshal (
        const ::CORBA::Policy_ptr p,
        TAO_OutputCDR & cdr
      );
  };

#endif /* end #if !defined */
}

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_ch.cpp:52

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::PolicyError &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::PolicyError &);

// TAO_IDL - Generated from
// be\be_visitor_exception/cdr_op_ch.cpp:52

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::InvalidPolicies &);
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::InvalidPolicies &);

// TAO_IDL - Generated from
// be\be_visitor_interface/cdr_op_ch.cpp:55

TAO_Export CORBA::Boolean operator<< (TAO_OutputCDR &, const CORBA::Policy_ptr );
TAO_Export CORBA::Boolean operator>> (TAO_InputCDR &, CORBA::Policy_ptr &);

// TAO_IDL - Generated from
// be\be_codegen.cpp:955

TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "tao/PolicyC.inl"
#endif /* defined INLINE */

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"

#endif /* ifndef */


