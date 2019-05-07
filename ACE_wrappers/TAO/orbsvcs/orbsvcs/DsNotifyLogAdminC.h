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

#ifndef _TAO_IDL_DSNOTIFYLOGADMINC_NQUNZX_H_
#define _TAO_IDL_DSNOTIFYLOGADMINC_NQUNZX_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/Log/notifylog_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/AnyTypeCode/TypeCode.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "DsEventLogAdminC.h"
#include "CosNotifyChannelAdminC.h"
#include "CosNotificationC.h"
#include "CosNotifyFilterC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 0 || TAO_BETA_VERSION != 4
#error This file should be regenerated with TAO_IDL from version 2.0a
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_NotifyLog_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:162

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  class Collocation_Proxy_Broker;
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:41

namespace DsNotifyLogAdmin
{

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOG__VAR_OUT_CH_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOG__VAR_OUT_CH_

  class NotifyLog;
  typedef NotifyLog *NotifyLog_ptr;

  typedef
    TAO_Objref_Var_T<
        NotifyLog
      >
    NotifyLog_var;
  
  typedef
    TAO_Objref_Out_T<
        NotifyLog
      >
    NotifyLog_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_NotifyLog_Export NotifyLog
    : public virtual ::DsEventLogAdmin::EventLog,
      public virtual ::CosNotifyChannelAdmin::EventChannel
  
  {
  public:
    friend class TAO::Narrow_Utils<NotifyLog>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef NotifyLog_ptr _ptr_type;
    typedef NotifyLog_var _var_type;
    typedef NotifyLog_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static NotifyLog_ptr _duplicate (NotifyLog_ptr obj);

    static void _tao_release (NotifyLog_ptr obj);

    static NotifyLog_ptr _narrow (::CORBA::Object_ptr obj);
    static NotifyLog_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static NotifyLog_ptr _nil (void);

    virtual ::CosNotifyFilter::Filter_ptr get_filter (
      void);

    virtual void set_filter (
      ::CosNotifyFilter::Filter_ptr filter);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_NotifyLog_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    NotifyLog (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void DsNotifyLogAdmin_NotifyLog_setup_collocation (void);

    // Concrete non-local interface only.
    NotifyLog (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    NotifyLog (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~NotifyLog (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    NotifyLog (const NotifyLog &);

    void operator= (const NotifyLog &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_NotifyLog_Export ::CORBA::TypeCode_ptr const _tc_NotifyLog;

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__VAR_OUT_CH_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__VAR_OUT_CH_

  class NotifyLogFactory;
  typedef NotifyLogFactory *NotifyLogFactory_ptr;

  typedef
    TAO_Objref_Var_T<
        NotifyLogFactory
      >
    NotifyLogFactory_var;
  
  typedef
    TAO_Objref_Out_T<
        NotifyLogFactory
      >
    NotifyLogFactory_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_NotifyLog_Export NotifyLogFactory
    : public virtual ::DsLogAdmin::LogMgr,
      public virtual ::CosNotifyChannelAdmin::ConsumerAdmin
  
  {
  public:
    friend class TAO::Narrow_Utils<NotifyLogFactory>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef NotifyLogFactory_ptr _ptr_type;
    typedef NotifyLogFactory_var _var_type;
    typedef NotifyLogFactory_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static NotifyLogFactory_ptr _duplicate (NotifyLogFactory_ptr obj);

    static void _tao_release (NotifyLogFactory_ptr obj);

    static NotifyLogFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static NotifyLogFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static NotifyLogFactory_ptr _nil (void);

    virtual ::DsNotifyLogAdmin::NotifyLog_ptr create (
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      const ::CosNotification::QoSProperties & initial_qos,
      const ::CosNotification::AdminProperties & initial_admin,
      ::DsLogAdmin::LogId_out id);

    virtual ::DsNotifyLogAdmin::NotifyLog_ptr create_with_id (
      ::DsLogAdmin::LogId id,
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      const ::CosNotification::QoSProperties & initial_qos,
      const ::CosNotification::AdminProperties & initial_admin);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_NotifyLogFactory_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    NotifyLogFactory (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void DsNotifyLogAdmin_NotifyLogFactory_setup_collocation (void);

    // Concrete non-local interface only.
    NotifyLogFactory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    NotifyLogFactory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~NotifyLogFactory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    NotifyLogFactory (const NotifyLogFactory &);

    void operator= (const NotifyLogFactory &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_NotifyLog_Export ::CORBA::TypeCode_ptr const _tc_NotifyLogFactory;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module DsNotifyLogAdmin

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOG__ARG_TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOG__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::DsNotifyLogAdmin::NotifyLog>
    : public
        Object_Arg_Traits_T<
            ::DsNotifyLogAdmin::NotifyLog_ptr,
            ::DsNotifyLogAdmin::NotifyLog_var,
            ::DsNotifyLogAdmin::NotifyLog_out,
            TAO::Objref_Traits<DsNotifyLogAdmin::NotifyLog>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__ARG_TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::DsNotifyLogAdmin::NotifyLogFactory>
    : public
        Object_Arg_Traits_T<
            ::DsNotifyLogAdmin::NotifyLogFactory_ptr,
            ::DsNotifyLogAdmin::NotifyLogFactory_var,
            ::DsNotifyLogAdmin::NotifyLogFactory_out,
            TAO::Objref_Traits<DsNotifyLogAdmin::NotifyLogFactory>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// Proxy Broker Factory function pointer declarations.

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_ch.cpp:204

extern TAO_NotifyLog_Export
TAO::Collocation_Proxy_Broker *
(*DsNotifyLogAdmin__TAO_NotifyLog_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

extern TAO_NotifyLog_Export
TAO::Collocation_Proxy_Broker *
(*DsNotifyLogAdmin__TAO_NotifyLogFactory_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOG__TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOG__TRAITS_

  template<>
  struct TAO_NotifyLog_Export Objref_Traits< ::DsNotifyLogAdmin::NotifyLog>
  {
    static ::DsNotifyLogAdmin::NotifyLog_ptr duplicate (
        ::DsNotifyLogAdmin::NotifyLog_ptr p);
    static void release (
        ::DsNotifyLogAdmin::NotifyLog_ptr p);
    static ::DsNotifyLogAdmin::NotifyLog_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DsNotifyLogAdmin::NotifyLog_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__TRAITS_

  template<>
  struct TAO_NotifyLog_Export Objref_Traits< ::DsNotifyLogAdmin::NotifyLogFactory>
  {
    static ::DsNotifyLogAdmin::NotifyLogFactory_ptr duplicate (
        ::DsNotifyLogAdmin::NotifyLogFactory_ptr p);
    static void release (
        ::DsNotifyLogAdmin::NotifyLogFactory_ptr p);
    static ::DsNotifyLogAdmin::NotifyLogFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DsNotifyLogAdmin::NotifyLogFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DsNotifyLogAdmin
{
  TAO_NotifyLog_Export void operator<<= ( ::CORBA::Any &, NotifyLog_ptr); // copying
  TAO_NotifyLog_Export void operator<<= ( ::CORBA::Any &, NotifyLog_ptr *); // non-copying
  TAO_NotifyLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NotifyLog_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_NotifyLog_Export void operator<<= (::CORBA::Any &, DsNotifyLogAdmin::NotifyLog_ptr); // copying
TAO_NotifyLog_Export void operator<<= (::CORBA::Any &, DsNotifyLogAdmin::NotifyLog_ptr *); // non-copying
TAO_NotifyLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DsNotifyLogAdmin::NotifyLog_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DsNotifyLogAdmin
{
  TAO_NotifyLog_Export void operator<<= ( ::CORBA::Any &, NotifyLogFactory_ptr); // copying
  TAO_NotifyLog_Export void operator<<= ( ::CORBA::Any &, NotifyLogFactory_ptr *); // non-copying
  TAO_NotifyLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, NotifyLogFactory_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_NotifyLog_Export void operator<<= (::CORBA::Any &, DsNotifyLogAdmin::NotifyLogFactory_ptr); // copying
TAO_NotifyLog_Export void operator<<= (::CORBA::Any &, DsNotifyLogAdmin::NotifyLogFactory_ptr *); // non-copying
TAO_NotifyLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DsNotifyLogAdmin::NotifyLogFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_NotifyLog_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const DsNotifyLogAdmin::NotifyLog_ptr );
TAO_NotifyLog_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, DsNotifyLogAdmin::NotifyLog_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_NotifyLog_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const DsNotifyLogAdmin::NotifyLogFactory_ptr );
TAO_NotifyLog_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, DsNotifyLogAdmin::NotifyLogFactory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "DsNotifyLogAdminC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

