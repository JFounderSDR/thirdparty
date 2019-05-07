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

#ifndef _TAO_IDL_FT_CORBA_ORBC_OMCZKC_H_
#define _TAO_IDL_FT_CORBA_ORBC_OMCZKC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/FaultTolerance/FT_ORB_Utils_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/Basic_Types.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/AnyTypeCode/TimeBaseA.h"
#include "tao/AnyTypeCode/IOPA.h"
#include "tao/AnyTypeCode/GIOPA.h"
#include "tao/AnyTypeCode/PolicyA.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include "tao/UB_String_Arguments.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "tao/TimeBaseC.h"
#include "tao/IOPC.h"
#include "tao/GIOPC.h"
#include "tao/PolicyC.h"
#include "PortableGroup_Simple_DSC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 0 || TAO_BETA_VERSION != 4
#error This file should be regenerated with TAO_IDL from version 2.0a
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_FT_ORB_Utils_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:41

namespace FT
{

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typedef/typedef_ch.cpp:403

  typedef char * FTDomainId;
  typedef ::CORBA::String_var FTDomainId_var;
  typedef ::CORBA::String_out FTDomainId_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_FTDomainId;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typedef/typedef_ch.cpp:369

  typedef PortableGroup::ObjectGroupId ObjectGroupId;
  typedef PortableGroup::ObjectGroupId_out ObjectGroupId_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_ObjectGroupId;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typedef/typedef_ch.cpp:369

  typedef PortableGroup::ObjectGroupRefVersion ObjectGroupRefVersion;
  typedef PortableGroup::ObjectGroupRefVersion_out ObjectGroupRefVersion_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_ObjectGroupRefVersion;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typedef/typedef_ch.cpp:509

  typedef PortableGroup::TagGroupTaggedComponent TagFTGroupTaggedComponent;
  typedef PortableGroup::TagGroupTaggedComponent_var TagFTGroupTaggedComponent_var;
  typedef PortableGroup::TagGroupTaggedComponent_out TagFTGroupTaggedComponent_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_TagFTGroupTaggedComponent;

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct TagFTPrimaryTaggedComponent;

  typedef
    ::TAO_Fixed_Var_T<
        TagFTPrimaryTaggedComponent
      >
    TagFTPrimaryTaggedComponent_var;
  
  typedef
    TagFTPrimaryTaggedComponent &
    TagFTPrimaryTaggedComponent_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:49

  struct TAO_FT_ORB_Utils_Export TagFTPrimaryTaggedComponent
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef TagFTPrimaryTaggedComponent_var _var_type;
    typedef TagFTPrimaryTaggedComponent_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::Boolean primary;
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_TagFTPrimaryTaggedComponent;

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct FTGroupVersionServiceContext;

  typedef
    ::TAO_Fixed_Var_T<
        FTGroupVersionServiceContext
      >
    FTGroupVersionServiceContext_var;
  
  typedef
    FTGroupVersionServiceContext &
    FTGroupVersionServiceContext_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:49

  struct TAO_FT_ORB_Utils_Export FTGroupVersionServiceContext
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef FTGroupVersionServiceContext_var _var_type;
    typedef FTGroupVersionServiceContext_out _out_type;

    static void _tao_any_destructor (void *);
    
    FT::ObjectGroupRefVersion object_group_ref_version;
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_FTGroupVersionServiceContext;

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct FTRequestServiceContext;

  typedef
    ::TAO_Var_Var_T<
        FTRequestServiceContext
      >
    FTRequestServiceContext_var;
  
  typedef
    ::TAO_Out_T<
        FTRequestServiceContext
      >
    FTRequestServiceContext_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:49

  struct TAO_FT_ORB_Utils_Export FTRequestServiceContext
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef FTRequestServiceContext_var _var_type;
    typedef FTRequestServiceContext_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::TAO::String_Manager client_id;
    ::CORBA::Long retention_id;
    TimeBase::TimeT expiration_time;
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_FTRequestServiceContext;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_constant/constant_ch.cpp:41

  const CORBA::ULong REQUEST_DURATION_POLICY = 47U;

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_FT_REQUESTDURATIONPOLICY__VAR_OUT_CH_)
#define _FT_REQUESTDURATIONPOLICY__VAR_OUT_CH_

  class RequestDurationPolicy;
  typedef RequestDurationPolicy *RequestDurationPolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        RequestDurationPolicy
      >
    RequestDurationPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        RequestDurationPolicy
      >
    RequestDurationPolicy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_FT_ORB_Utils_Export RequestDurationPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef RequestDurationPolicy_ptr _ptr_type;
    typedef RequestDurationPolicy_var _var_type;
    typedef RequestDurationPolicy_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static RequestDurationPolicy_ptr _duplicate (RequestDurationPolicy_ptr obj);

    static void _tao_release (RequestDurationPolicy_ptr obj);

    static RequestDurationPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static RequestDurationPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static RequestDurationPolicy_ptr _nil (void);

    virtual ::TimeBase::TimeT request_duration_policy_value (
      void) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    RequestDurationPolicy (void);

    

    virtual ~RequestDurationPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    RequestDurationPolicy (const RequestDurationPolicy &);

    void operator= (const RequestDurationPolicy &);
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_RequestDurationPolicy;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_constant/constant_ch.cpp:41

  const CORBA::ULong HEARTBEAT_POLICY = 48U;

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct HeartbeatPolicyValue;

  typedef
    ::TAO_Fixed_Var_T<
        HeartbeatPolicyValue
      >
    HeartbeatPolicyValue_var;
  
  typedef
    HeartbeatPolicyValue &
    HeartbeatPolicyValue_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:49

  struct TAO_FT_ORB_Utils_Export HeartbeatPolicyValue
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef HeartbeatPolicyValue_var _var_type;
    typedef HeartbeatPolicyValue_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::Boolean heartbeat;
    TimeBase::TimeT heartbeat_interval;
    TimeBase::TimeT heartbeat_timeout;
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_HeartbeatPolicyValue;

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_FT_HEARTBEATPOLICY__VAR_OUT_CH_)
#define _FT_HEARTBEATPOLICY__VAR_OUT_CH_

  class HeartbeatPolicy;
  typedef HeartbeatPolicy *HeartbeatPolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        HeartbeatPolicy
      >
    HeartbeatPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        HeartbeatPolicy
      >
    HeartbeatPolicy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_FT_ORB_Utils_Export HeartbeatPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef HeartbeatPolicy_ptr _ptr_type;
    typedef HeartbeatPolicy_var _var_type;
    typedef HeartbeatPolicy_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static HeartbeatPolicy_ptr _duplicate (HeartbeatPolicy_ptr obj);

    static void _tao_release (HeartbeatPolicy_ptr obj);

    static HeartbeatPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static HeartbeatPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static HeartbeatPolicy_ptr _nil (void);

    virtual ::FT::HeartbeatPolicyValue heartbeat_policy_value (
      void) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    HeartbeatPolicy (void);

    

    virtual ~HeartbeatPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    HeartbeatPolicy (const HeartbeatPolicy &);

    void operator= (const HeartbeatPolicy &);
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_HeartbeatPolicy;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_constant/constant_ch.cpp:41

  const CORBA::ULong HEARTBEAT_ENABLED_POLICY = 49U;

  // TAO_IDL - Generated from
  // .\be\be_type.cpp:261

  struct TagFTHeartbeatEnabledTaggedComponent;

  typedef
    ::TAO_Fixed_Var_T<
        TagFTHeartbeatEnabledTaggedComponent
      >
    TagFTHeartbeatEnabledTaggedComponent_var;
  
  typedef
    TagFTHeartbeatEnabledTaggedComponent &
    TagFTHeartbeatEnabledTaggedComponent_out;

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/structure_ch.cpp:49

  struct TAO_FT_ORB_Utils_Export TagFTHeartbeatEnabledTaggedComponent
  {

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef TagFTHeartbeatEnabledTaggedComponent_var _var_type;
    typedef TagFTHeartbeatEnabledTaggedComponent_out _out_type;

    static void _tao_any_destructor (void *);
    
    ::CORBA::Boolean heartbeat_enabled;
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_TagFTHeartbeatEnabledTaggedComponent;

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_FT_HEARTBEATENABLEDPOLICY__VAR_OUT_CH_)
#define _FT_HEARTBEATENABLEDPOLICY__VAR_OUT_CH_

  class HeartbeatEnabledPolicy;
  typedef HeartbeatEnabledPolicy *HeartbeatEnabledPolicy_ptr;

  typedef
    TAO_Objref_Var_T<
        HeartbeatEnabledPolicy
      >
    HeartbeatEnabledPolicy_var;
  
  typedef
    TAO_Objref_Out_T<
        HeartbeatEnabledPolicy
      >
    HeartbeatEnabledPolicy_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_FT_ORB_Utils_Export HeartbeatEnabledPolicy
    : public virtual ::CORBA::Policy
  
  {
  public:

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef HeartbeatEnabledPolicy_ptr _ptr_type;
    typedef HeartbeatEnabledPolicy_var _var_type;
    typedef HeartbeatEnabledPolicy_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static HeartbeatEnabledPolicy_ptr _duplicate (HeartbeatEnabledPolicy_ptr obj);

    static void _tao_release (HeartbeatEnabledPolicy_ptr obj);

    static HeartbeatEnabledPolicy_ptr _narrow (::CORBA::Object_ptr obj);
    static HeartbeatEnabledPolicy_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static HeartbeatEnabledPolicy_ptr _nil (void);

    virtual ::CORBA::Boolean heartbeat_enabled_policy_value (
      void) = 0;

    virtual ::CORBA::Policy_ptr copy (
      void) = 0;

    virtual void destroy (
      void) = 0;

    // TAO_IDL - Generated from
    // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Abstract or local interface only.
    HeartbeatEnabledPolicy (void);

    

    virtual ~HeartbeatEnabledPolicy (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    HeartbeatEnabledPolicy (const HeartbeatEnabledPolicy &);

    void operator= (const HeartbeatEnabledPolicy &);
  };

  // TAO_IDL - Generated from
  // e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_FT_ORB_Utils_Export ::CORBA::TypeCode_ptr const _tc_HeartbeatEnabledPolicy;

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module FT

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class Arg_Traits< ::FT::TagFTPrimaryTaggedComponent>
    : public
        Fixed_Size_Arg_Traits_T<
            ::FT::TagFTPrimaryTaggedComponent,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class Arg_Traits< ::FT::FTGroupVersionServiceContext>
    : public
        Fixed_Size_Arg_Traits_T<
            ::FT::FTGroupVersionServiceContext,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class Arg_Traits< ::FT::FTRequestServiceContext>
    : public
        Var_Size_Arg_Traits_T<
            ::FT::FTRequestServiceContext,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class Arg_Traits< ::FT::HeartbeatPolicyValue>
    : public
        Fixed_Size_Arg_Traits_T<
            ::FT::HeartbeatPolicyValue,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class Arg_Traits< ::FT::TagFTHeartbeatEnabledTaggedComponent>
    : public
        Fixed_Size_Arg_Traits_T<
            ::FT::TagFTHeartbeatEnabledTaggedComponent,
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

#if !defined (_FT_REQUESTDURATIONPOLICY__TRAITS_)
#define _FT_REQUESTDURATIONPOLICY__TRAITS_

  template<>
  struct TAO_FT_ORB_Utils_Export Objref_Traits< ::FT::RequestDurationPolicy>
  {
    static ::FT::RequestDurationPolicy_ptr duplicate (
        ::FT::RequestDurationPolicy_ptr p);
    static void release (
        ::FT::RequestDurationPolicy_ptr p);
    static ::FT::RequestDurationPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FT::RequestDurationPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_FT_HEARTBEATPOLICY__TRAITS_)
#define _FT_HEARTBEATPOLICY__TRAITS_

  template<>
  struct TAO_FT_ORB_Utils_Export Objref_Traits< ::FT::HeartbeatPolicy>
  {
    static ::FT::HeartbeatPolicy_ptr duplicate (
        ::FT::HeartbeatPolicy_ptr p);
    static void release (
        ::FT::HeartbeatPolicy_ptr p);
    static ::FT::HeartbeatPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FT::HeartbeatPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_FT_HEARTBEATENABLEDPOLICY__TRAITS_)
#define _FT_HEARTBEATENABLEDPOLICY__TRAITS_

  template<>
  struct TAO_FT_ORB_Utils_Export Objref_Traits< ::FT::HeartbeatEnabledPolicy>
  {
    static ::FT::HeartbeatEnabledPolicy_ptr duplicate (
        ::FT::HeartbeatEnabledPolicy_ptr p);
    static void release (
        ::FT::HeartbeatEnabledPolicy_ptr p);
    static ::FT::HeartbeatEnabledPolicy_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::FT::HeartbeatEnabledPolicy_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const ::FT::TagFTPrimaryTaggedComponent &); // copying version
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, ::FT::TagFTPrimaryTaggedComponent*); // noncopying version
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::FT::TagFTPrimaryTaggedComponent *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::FT::TagFTPrimaryTaggedComponent *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const FT::TagFTPrimaryTaggedComponent &); // copying version
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::TagFTPrimaryTaggedComponent*); // noncopying version
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::TagFTPrimaryTaggedComponent *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const FT::TagFTPrimaryTaggedComponent *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const ::FT::FTGroupVersionServiceContext &); // copying version
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, ::FT::FTGroupVersionServiceContext*); // noncopying version
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::FT::FTGroupVersionServiceContext *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::FT::FTGroupVersionServiceContext *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const FT::FTGroupVersionServiceContext &); // copying version
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::FTGroupVersionServiceContext*); // noncopying version
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::FTGroupVersionServiceContext *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const FT::FTGroupVersionServiceContext *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const ::FT::FTRequestServiceContext &); // copying version
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, ::FT::FTRequestServiceContext*); // noncopying version
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::FT::FTRequestServiceContext *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::FT::FTRequestServiceContext *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const FT::FTRequestServiceContext &); // copying version
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::FTRequestServiceContext*); // noncopying version
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::FTRequestServiceContext *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const FT::FTRequestServiceContext *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= ( ::CORBA::Any &, RequestDurationPolicy_ptr); // copying
  TAO_FT_ORB_Utils_Export void operator<<= ( ::CORBA::Any &, RequestDurationPolicy_ptr *); // non-copying
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, RequestDurationPolicy_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::RequestDurationPolicy_ptr); // copying
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::RequestDurationPolicy_ptr *); // non-copying
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::RequestDurationPolicy_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const ::FT::HeartbeatPolicyValue &); // copying version
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, ::FT::HeartbeatPolicyValue*); // noncopying version
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::FT::HeartbeatPolicyValue *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::FT::HeartbeatPolicyValue *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const FT::HeartbeatPolicyValue &); // copying version
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::HeartbeatPolicyValue*); // noncopying version
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::HeartbeatPolicyValue *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const FT::HeartbeatPolicyValue *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= ( ::CORBA::Any &, HeartbeatPolicy_ptr); // copying
  TAO_FT_ORB_Utils_Export void operator<<= ( ::CORBA::Any &, HeartbeatPolicy_ptr *); // non-copying
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, HeartbeatPolicy_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::HeartbeatPolicy_ptr); // copying
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::HeartbeatPolicy_ptr *); // non-copying
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::HeartbeatPolicy_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/any_op_ch.cpp:44



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const ::FT::TagFTHeartbeatEnabledTaggedComponent &); // copying version
  TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, ::FT::TagFTHeartbeatEnabledTaggedComponent*); // noncopying version
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, ::FT::TagFTHeartbeatEnabledTaggedComponent *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const ::FT::TagFTHeartbeatEnabledTaggedComponent *&);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, const FT::TagFTHeartbeatEnabledTaggedComponent &); // copying version
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::TagFTHeartbeatEnabledTaggedComponent*); // noncopying version
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::TagFTHeartbeatEnabledTaggedComponent *&); // deprecated
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, const FT::TagFTHeartbeatEnabledTaggedComponent *&);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace FT
{
  TAO_FT_ORB_Utils_Export void operator<<= ( ::CORBA::Any &, HeartbeatEnabledPolicy_ptr); // copying
  TAO_FT_ORB_Utils_Export void operator<<= ( ::CORBA::Any &, HeartbeatEnabledPolicy_ptr *); // non-copying
  TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, HeartbeatEnabledPolicy_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::HeartbeatEnabledPolicy_ptr); // copying
TAO_FT_ORB_Utils_Export void operator<<= (::CORBA::Any &, FT::HeartbeatEnabledPolicy_ptr *); // non-copying
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, FT::HeartbeatEnabledPolicy_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT::TagFTPrimaryTaggedComponent &);
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, FT::TagFTPrimaryTaggedComponent &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT::FTGroupVersionServiceContext &);
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, FT::FTGroupVersionServiceContext &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT::FTRequestServiceContext &);
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, FT::FTRequestServiceContext &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT::HeartbeatPolicyValue &);
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, FT::HeartbeatPolicyValue &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_structure/cdr_op_ch.cpp:45



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const FT::TagFTHeartbeatEnabledTaggedComponent &);
TAO_FT_ORB_Utils_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, FT::TagFTHeartbeatEnabledTaggedComponent &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "FT_CORBA_ORBC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

