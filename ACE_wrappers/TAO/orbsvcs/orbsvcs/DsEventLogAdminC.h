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

#ifndef _TAO_IDL_DSEVENTLOGADMINC_LIHYJC_H_
#define _TAO_IDL_DSEVENTLOGADMINC_LIHYJC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include /**/ "orbsvcs/Log/eventlog_export.h"
#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
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

#include "CosEventChannelAdminC.h"
#include "DsLogAdminC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 0 || TAO_BETA_VERSION != 4
#error This file should be regenerated with TAO_IDL from version 2.0a
#endif

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_EventLog_Export

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

namespace DsEventLogAdmin
{

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_DSEVENTLOGADMIN_EVENTLOG__VAR_OUT_CH_)
#define _DSEVENTLOGADMIN_EVENTLOG__VAR_OUT_CH_

  class EventLog;
  typedef EventLog *EventLog_ptr;

  typedef
    TAO_Objref_Var_T<
        EventLog
      >
    EventLog_var;
  
  typedef
    TAO_Objref_Out_T<
        EventLog
      >
    EventLog_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_EventLog_Export EventLog
    : public virtual ::DsLogAdmin::Log,
      public virtual ::CosEventChannelAdmin::EventChannel
  
  {
  public:
    friend class TAO::Narrow_Utils<EventLog>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef EventLog_ptr _ptr_type;
    typedef EventLog_var _var_type;
    typedef EventLog_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventLog_ptr _duplicate (EventLog_ptr obj);

    static void _tao_release (EventLog_ptr obj);

    static EventLog_ptr _narrow (::CORBA::Object_ptr obj);
    static EventLog_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventLog_ptr _nil (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_EventLog_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    EventLog (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void DsEventLogAdmin_EventLog_setup_collocation (void);

    // Concrete non-local interface only.
    EventLog (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    EventLog (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~EventLog (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventLog (const EventLog &);

    void operator= (const EventLog &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_EventLog_Export ::CORBA::TypeCode_ptr const _tc_EventLog;

  // TAO_IDL - Generated from
  // .\be\be_interface.cpp:784

#if !defined (_DSEVENTLOGADMIN_EVENTLOGFACTORY__VAR_OUT_CH_)
#define _DSEVENTLOGADMIN_EVENTLOGFACTORY__VAR_OUT_CH_

  class EventLogFactory;
  typedef EventLogFactory *EventLogFactory_ptr;

  typedef
    TAO_Objref_Var_T<
        EventLogFactory
      >
    EventLogFactory_var;
  
  typedef
    TAO_Objref_Out_T<
        EventLogFactory
      >
    EventLogFactory_out;

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:45

  class TAO_EventLog_Export EventLogFactory
    : public virtual ::DsLogAdmin::LogMgr,
      public virtual ::CosEventChannelAdmin::ConsumerAdmin
  
  {
  public:
    friend class TAO::Narrow_Utils<EventLogFactory>;

    // TAO_IDL - Generated from
    // .\be\be_type.cpp:307
    
    typedef EventLogFactory_ptr _ptr_type;
    typedef EventLogFactory_var _var_type;
    typedef EventLogFactory_out _out_type;

    static void _tao_any_destructor (void *);

    // The static operations.
    static EventLogFactory_ptr _duplicate (EventLogFactory_ptr obj);

    static void _tao_release (EventLogFactory_ptr obj);

    static EventLogFactory_ptr _narrow (::CORBA::Object_ptr obj);
    static EventLogFactory_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static EventLogFactory_ptr _nil (void);

    virtual ::DsEventLogAdmin::EventLog_ptr create (
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      ::DsLogAdmin::LogId_out id);

    virtual ::DsEventLogAdmin::EventLog_ptr create_with_id (
      ::DsLogAdmin::LogId id,
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_ch.cpp:156

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id (void) const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  private:
    TAO::Collocation_Proxy_Broker *the_TAO_EventLogFactory_Proxy_Broker_;
  
  protected:
    // Concrete interface only.
    EventLogFactory (void);

    // These methods traverse the inheritance tree and set the
    // parents piece of the given class in the right mode.
    virtual void DsEventLogAdmin_EventLogFactory_setup_collocation (void);

    // Concrete non-local interface only.
    EventLogFactory (
        ::IOP::IOR *ior,
        TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    EventLogFactory (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = 0,
        TAO_ORB_Core *orb_core = 0);

    virtual ~EventLogFactory (void);
  
  private:
    // Private and unimplemented for concrete interfaces.
    EventLogFactory (const EventLogFactory &);

    void operator= (const EventLogFactory &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_decl.cpp:39

  extern TAO_EventLog_Export ::CORBA::TypeCode_ptr const _tc_EventLogFactory;

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_ch.cpp:70

} // module DsEventLogAdmin

// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_DSEVENTLOGADMIN_EVENTLOG__ARG_TRAITS_)
#define _DSEVENTLOGADMIN_EVENTLOG__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::DsEventLogAdmin::EventLog>
    : public
        Object_Arg_Traits_T<
            ::DsEventLogAdmin::EventLog_ptr,
            ::DsEventLogAdmin::EventLog_var,
            ::DsEventLogAdmin::EventLog_out,
            TAO::Objref_Traits<DsEventLogAdmin::EventLog>,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_DSEVENTLOGADMIN_EVENTLOGFACTORY__ARG_TRAITS_)
#define _DSEVENTLOGADMIN_EVENTLOGFACTORY__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::DsEventLogAdmin::EventLogFactory>
    : public
        Object_Arg_Traits_T<
            ::DsEventLogAdmin::EventLogFactory_ptr,
            ::DsEventLogAdmin::EventLogFactory_var,
            ::DsEventLogAdmin::EventLogFactory_out,
            TAO::Objref_Traits<DsEventLogAdmin::EventLogFactory>,
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

extern TAO_EventLog_Export
TAO::Collocation_Proxy_Broker *
(*DsEventLogAdmin__TAO_EventLog_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

extern TAO_EventLog_Export
TAO::Collocation_Proxy_Broker *
(*DsEventLogAdmin__TAO_EventLogFactory_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj);

// TAO_IDL - Generated from
// .\be\be_visitor_traits.cpp:62


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_DSEVENTLOGADMIN_EVENTLOG__TRAITS_)
#define _DSEVENTLOGADMIN_EVENTLOG__TRAITS_

  template<>
  struct TAO_EventLog_Export Objref_Traits< ::DsEventLogAdmin::EventLog>
  {
    static ::DsEventLogAdmin::EventLog_ptr duplicate (
        ::DsEventLogAdmin::EventLog_ptr p);
    static void release (
        ::DsEventLogAdmin::EventLog_ptr p);
    static ::DsEventLogAdmin::EventLog_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DsEventLogAdmin::EventLog_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_DSEVENTLOGADMIN_EVENTLOGFACTORY__TRAITS_)
#define _DSEVENTLOGADMIN_EVENTLOGFACTORY__TRAITS_

  template<>
  struct TAO_EventLog_Export Objref_Traits< ::DsEventLogAdmin::EventLogFactory>
  {
    static ::DsEventLogAdmin::EventLogFactory_ptr duplicate (
        ::DsEventLogAdmin::EventLogFactory_ptr p);
    static void release (
        ::DsEventLogAdmin::EventLogFactory_ptr p);
    static ::DsEventLogAdmin::EventLogFactory_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::DsEventLogAdmin::EventLogFactory_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DsEventLogAdmin
{
  TAO_EventLog_Export void operator<<= ( ::CORBA::Any &, EventLog_ptr); // copying
  TAO_EventLog_Export void operator<<= ( ::CORBA::Any &, EventLog_ptr *); // non-copying
  TAO_EventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventLog_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EventLog_Export void operator<<= (::CORBA::Any &, DsEventLogAdmin::EventLog_ptr); // copying
TAO_EventLog_Export void operator<<= (::CORBA::Any &, DsEventLogAdmin::EventLog_ptr *); // non-copying
TAO_EventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DsEventLogAdmin::EventLog_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_ch.cpp:46



#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace DsEventLogAdmin
{
  TAO_EventLog_Export void operator<<= ( ::CORBA::Any &, EventLogFactory_ptr); // copying
  TAO_EventLog_Export void operator<<= ( ::CORBA::Any &, EventLogFactory_ptr *); // non-copying
  TAO_EventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, EventLogFactory_ptr &);
}

#else



TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EventLog_Export void operator<<= (::CORBA::Any &, DsEventLogAdmin::EventLogFactory_ptr); // copying
TAO_EventLog_Export void operator<<= (::CORBA::Any &, DsEventLogAdmin::EventLogFactory_ptr *); // non-copying
TAO_EventLog_Export ::CORBA::Boolean operator>>= (const ::CORBA::Any &, DsEventLogAdmin::EventLogFactory_ptr &);
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EventLog_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const DsEventLogAdmin::EventLog_ptr );
TAO_EventLog_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, DsEventLogAdmin::EventLog_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_ch.cpp:47


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_EventLog_Export ::CORBA::Boolean operator<< (TAO_OutputCDR &, const DsEventLogAdmin::EventLogFactory_ptr );
TAO_EventLog_Export ::CORBA::Boolean operator>> (TAO_InputCDR &, DsEventLogAdmin::EventLogFactory_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// .\be\be_codegen.cpp:1581


TAO_END_VERSIONED_NAMESPACE_DECL

#if defined (__ACE_INLINE__)
#include "DsEventLogAdminC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

