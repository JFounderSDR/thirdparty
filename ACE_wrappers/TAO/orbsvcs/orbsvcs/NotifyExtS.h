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
// .\be\be_codegen.cpp:460

#ifndef _TAO_IDL_NOTIFYEXTS_OUHPW1_H_
#define _TAO_IDL_NOTIFYEXTS_OUHPW1_H_


#include "NotifyExtC.h"
#include "CosNotifyChannelAdminS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Collocation_Proxy_Broker.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "orbsvcs/Notify/notify_skel_export.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Notify_Skel_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:898

  template<>
  class SArg_Traits< ::NotifyExt::PriorityModel>
    : public
        Basic_SArg_Traits_T<
            ::NotifyExt::PriorityModel,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::NotifyExt::ThreadPoolParams>
    : public
        Fixed_Size_SArg_Traits_T<
            ::NotifyExt::ThreadPoolParams,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::NotifyExt::ThreadPoolLane>
    : public
        Fixed_Size_SArg_Traits_T<
            ::NotifyExt::ThreadPoolLane,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::NotifyExt::ThreadPoolLanes_List>
    : public
        Var_Size_SArg_Traits_T<
            ::NotifyExt::ThreadPoolLanes_List,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::NotifyExt::ThreadPoolLanesParams>
    : public
        Var_Size_SArg_Traits_T<
            ::NotifyExt::ThreadPoolLanesParams,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_NOTIFYEXT_RECONNECTIONCALLBACK__SARG_TRAITS_)
#define _NOTIFYEXT_RECONNECTIONCALLBACK__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::NotifyExt::ReconnectionCallback>
    : public
        Object_SArg_Traits_T<
            ::NotifyExt::ReconnectionCallback_ptr,
            ::NotifyExt::ReconnectionCallback_var,
            ::NotifyExt::ReconnectionCallback_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_NOTIFYEXT_RECONNECTIONREGISTRY__SARG_TRAITS_)
#define _NOTIFYEXT_RECONNECTIONREGISTRY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::NotifyExt::ReconnectionRegistry>
    : public
        Object_SArg_Traits_T<
            ::NotifyExt::ReconnectionRegistry_ptr,
            ::NotifyExt::ReconnectionRegistry_var,
            ::NotifyExt::ReconnectionRegistry_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_NOTIFYEXT_EVENTCHANNELFACTORY__SARG_TRAITS_)
#define _NOTIFYEXT_EVENTCHANNELFACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::NotifyExt::EventChannelFactory>
    : public
        Object_SArg_Traits_T<
            ::NotifyExt::EventChannelFactory_ptr,
            ::NotifyExt::EventChannelFactory_var,
            ::NotifyExt::EventChannelFactory_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_NOTIFYEXT_CONSUMERADMIN__SARG_TRAITS_)
#define _NOTIFYEXT_CONSUMERADMIN__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::NotifyExt::ConsumerAdmin>
    : public
        Object_SArg_Traits_T<
            ::NotifyExt::ConsumerAdmin_ptr,
            ::NotifyExt::ConsumerAdmin_var,
            ::NotifyExt::ConsumerAdmin_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_NOTIFYEXT_SUPPLIERADMIN__SARG_TRAITS_)
#define _NOTIFYEXT_SUPPLIERADMIN__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::NotifyExt::SupplierAdmin>
    : public
        Object_SArg_Traits_T<
            ::NotifyExt::SupplierAdmin_ptr,
            ::NotifyExt::SupplierAdmin_var,
            ::NotifyExt::SupplierAdmin_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:41

namespace POA_NotifyExt
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class ReconnectionCallback;
  typedef ReconnectionCallback *ReconnectionCallback_ptr;

  class TAO_Notify_Skel_Export ReconnectionCallback
    : public virtual PortableServer::ServantBase
  {
  protected:
    ReconnectionCallback (void);
  
  public:
    /// Useful for template programming.
    typedef ::NotifyExt::ReconnectionCallback _stub_type;
    typedef ::NotifyExt::ReconnectionCallback_ptr _stub_ptr_type;
    typedef ::NotifyExt::ReconnectionCallback_var _stub_var_type;

    ReconnectionCallback (const ReconnectionCallback& rhs);
    virtual ~ReconnectionCallback (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::NotifyExt::ReconnectionCallback *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void reconnect (
      ::CORBA::Object_ptr new_connection) = 0;

    static void reconnect_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean is_alive (
      void) = 0;

    static void is_alive_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class ReconnectionRegistry;
  typedef ReconnectionRegistry *ReconnectionRegistry_ptr;

  class TAO_Notify_Skel_Export ReconnectionRegistry
    : public virtual PortableServer::ServantBase
  {
  protected:
    ReconnectionRegistry (void);
  
  public:
    /// Useful for template programming.
    typedef ::NotifyExt::ReconnectionRegistry _stub_type;
    typedef ::NotifyExt::ReconnectionRegistry_ptr _stub_ptr_type;
    typedef ::NotifyExt::ReconnectionRegistry_var _stub_var_type;

    ReconnectionRegistry (const ReconnectionRegistry& rhs);
    virtual ~ReconnectionRegistry (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::NotifyExt::ReconnectionRegistry *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::NotifyExt::ReconnectionRegistry::ReconnectionID register_callback (
      ::NotifyExt::ReconnectionCallback_ptr reconection) = 0;

    static void register_callback_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void unregister_callback (
      ::NotifyExt::ReconnectionRegistry::ReconnectionID id) = 0;

    static void unregister_callback_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean is_alive (
      void) = 0;

    static void is_alive_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class EventChannelFactory;
  typedef EventChannelFactory *EventChannelFactory_ptr;

  class TAO_Notify_Skel_Export EventChannelFactory
    : public virtual POA_CosNotifyChannelAdmin::EventChannelFactory,
      public virtual POA_NotifyExt::ReconnectionRegistry
  {
  protected:
    EventChannelFactory (void);
  
  public:
    /// Useful for template programming.
    typedef ::NotifyExt::EventChannelFactory _stub_type;
    typedef ::NotifyExt::EventChannelFactory_ptr _stub_ptr_type;
    typedef ::NotifyExt::EventChannelFactory_var _stub_var_type;

    EventChannelFactory (const EventChannelFactory& rhs);
    virtual ~EventChannelFactory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::NotifyExt::EventChannelFactory *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void destroy (
      void) = 0;

    static void destroy_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void save_topology (
      void) = 0;

    static void save_topology_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    create_channel_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_all_channels_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_event_channel_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    register_callback_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    unregister_callback_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    is_alive_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class ConsumerAdmin;
  typedef ConsumerAdmin *ConsumerAdmin_ptr;

  class TAO_Notify_Skel_Export ConsumerAdmin
    : public virtual POA_CosNotifyChannelAdmin::ConsumerAdmin
  {
  protected:
    ConsumerAdmin (void);
  
  public:
    /// Useful for template programming.
    typedef ::NotifyExt::ConsumerAdmin _stub_type;
    typedef ::NotifyExt::ConsumerAdmin_ptr _stub_ptr_type;
    typedef ::NotifyExt::ConsumerAdmin_var _stub_var_type;

    ConsumerAdmin (const ConsumerAdmin& rhs);
    virtual ~ConsumerAdmin (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::NotifyExt::ConsumerAdmin *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosNotifyChannelAdmin::ProxySupplier_ptr obtain_notification_push_supplier_with_qos (
      ::CosNotifyChannelAdmin::ClientType ctype,
      ::CosNotifyChannelAdmin::ProxyID_out proxy_id,
      const ::CosNotification::QoSProperties & initial_qos) = 0;

    static void obtain_notification_push_supplier_with_qos_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    validate_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    subscription_change_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    add_filter_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    remove_filter_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_filter_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_all_filters_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    remove_all_filters_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_push_supplier_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_pull_supplier_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    static void
    _get_MyID_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_MyChannel_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_MyOperator_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_priority_filter_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _set_priority_filter_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_lifetime_filter_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _set_lifetime_filter_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_pull_suppliers_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_push_suppliers_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_proxy_supplier_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_notification_pull_supplier_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_notification_push_supplier_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    destroy_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class SupplierAdmin;
  typedef SupplierAdmin *SupplierAdmin_ptr;

  class TAO_Notify_Skel_Export SupplierAdmin
    : public virtual POA_CosNotifyChannelAdmin::SupplierAdmin
  {
  protected:
    SupplierAdmin (void);
  
  public:
    /// Useful for template programming.
    typedef ::NotifyExt::SupplierAdmin _stub_type;
    typedef ::NotifyExt::SupplierAdmin_ptr _stub_ptr_type;
    typedef ::NotifyExt::SupplierAdmin_var _stub_var_type;

    SupplierAdmin (const SupplierAdmin& rhs);
    virtual ~SupplierAdmin (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::NotifyExt::SupplierAdmin *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosNotifyChannelAdmin::ProxyConsumer_ptr obtain_notification_push_consumer_with_qos (
      ::CosNotifyChannelAdmin::ClientType ctype,
      ::CosNotifyChannelAdmin::ProxyID_out proxy_id,
      const ::CosNotification::QoSProperties & initial_qos) = 0;

    static void obtain_notification_push_consumer_with_qos_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    validate_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    offer_change_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    add_filter_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    remove_filter_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_filter_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_all_filters_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    remove_all_filters_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_push_consumer_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_pull_consumer_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    static void
    _get_MyID_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_MyChannel_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_MyOperator_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_pull_consumers_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_push_consumers_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_proxy_consumer_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_notification_pull_consumer_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    obtain_notification_push_consumer_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    destroy_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:72

} // module NotifyExt

TAO_END_VERSIONED_NAMESPACE_DECL


#if defined (__ACE_INLINE__)
#include "NotifyExtS.inl"
#endif /* defined INLINE */

#endif /* ifndef */

