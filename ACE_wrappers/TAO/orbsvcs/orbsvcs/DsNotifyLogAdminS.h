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

#ifndef _TAO_IDL_DSNOTIFYLOGADMINS_E7G4BW_H_
#define _TAO_IDL_DSNOTIFYLOGADMINS_E7G4BW_H_


#include "DsNotifyLogAdminC.h"
#include "DsEventLogAdminS.h"
#include "CosNotifyChannelAdminS.h"
#include "CosNotificationS.h"
#include "CosNotifyFilterS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
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

#include /**/ "orbsvcs/Log/notifylog_skel_export.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_NotifyLog_Skel_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOG__SARG_TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOG__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::DsNotifyLogAdmin::NotifyLog>
    : public
        Object_SArg_Traits_T<
            ::DsNotifyLogAdmin::NotifyLog_ptr,
            ::DsNotifyLogAdmin::NotifyLog_var,
            ::DsNotifyLogAdmin::NotifyLog_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__SARG_TRAITS_)
#define _DSNOTIFYLOGADMIN_NOTIFYLOGFACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::DsNotifyLogAdmin::NotifyLogFactory>
    : public
        Object_SArg_Traits_T<
            ::DsNotifyLogAdmin::NotifyLogFactory_ptr,
            ::DsNotifyLogAdmin::NotifyLogFactory_var,
            ::DsNotifyLogAdmin::NotifyLogFactory_out,
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

namespace POA_DsNotifyLogAdmin
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class NotifyLog;
  typedef NotifyLog *NotifyLog_ptr;

  class TAO_NotifyLog_Skel_Export NotifyLog
    : public virtual POA_DsEventLogAdmin::EventLog,
      public virtual POA_CosNotifyChannelAdmin::EventChannel
  {
  protected:
    NotifyLog (void);
  
  public:
    /// Useful for template programming.
    typedef ::DsNotifyLogAdmin::NotifyLog _stub_type;
    typedef ::DsNotifyLogAdmin::NotifyLog_ptr _stub_ptr_type;
    typedef ::DsNotifyLogAdmin::NotifyLog_var _stub_var_type;

    NotifyLog (const NotifyLog& rhs);
    virtual ~NotifyLog (void);

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
    
    ::DsNotifyLogAdmin::NotifyLog *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosNotifyFilter::Filter_ptr get_filter (
      void) = 0;

    static void get_filter_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void set_filter (
      ::CosNotifyFilter::Filter_ptr filter) = 0;

    static void set_filter_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    my_factory_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    id_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_log_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_log_qos_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_max_record_life_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_max_record_life_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_max_size_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_max_size_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_current_size_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_n_records_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_log_full_action_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_log_full_action_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_administrative_state_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_administrative_state_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_forwarding_state_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_forwarding_state_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_operational_state_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_interval_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_interval_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_availability_status_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_capacity_alarm_thresholds_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_capacity_alarm_thresholds_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_week_mask_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_week_mask_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    query_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    retrieve_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    match_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    delete_records_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    delete_records_by_id_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    write_records_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    write_recordlist_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_record_attribute_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_records_attribute_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_record_attribute_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    copy_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    copy_with_id_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    flush_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    for_consumers_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    for_suppliers_skel (
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
    get_admin_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    set_admin_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    static void
    _get_MyFactory_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_default_consumer_admin_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_default_supplier_admin_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    static void
    _get_default_filter_factory_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    new_for_consumers_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    new_for_suppliers_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_consumeradmin_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_supplieradmin_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_all_consumeradmins_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_all_supplieradmins_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class NotifyLogFactory;
  typedef NotifyLogFactory *NotifyLogFactory_ptr;

  class TAO_NotifyLog_Skel_Export NotifyLogFactory
    : public virtual POA_DsLogAdmin::LogMgr,
      public virtual POA_CosNotifyChannelAdmin::ConsumerAdmin
  {
  protected:
    NotifyLogFactory (void);
  
  public:
    /// Useful for template programming.
    typedef ::DsNotifyLogAdmin::NotifyLogFactory _stub_type;
    typedef ::DsNotifyLogAdmin::NotifyLogFactory_ptr _stub_ptr_type;
    typedef ::DsNotifyLogAdmin::NotifyLogFactory_var _stub_var_type;

    NotifyLogFactory (const NotifyLogFactory& rhs);
    virtual ~NotifyLogFactory (void);

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
    
    ::DsNotifyLogAdmin::NotifyLogFactory *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::DsNotifyLogAdmin::NotifyLog_ptr create (
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      const ::CosNotification::QoSProperties & initial_qos,
      const ::CosNotification::AdminProperties & initial_admin,
      ::DsLogAdmin::LogId_out id) = 0;

    static void create_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::DsNotifyLogAdmin::NotifyLog_ptr create_with_id (
      ::DsLogAdmin::LogId id,
      ::DsLogAdmin::LogFullActionType full_action,
      ::CORBA::ULongLong max_size,
      const ::DsLogAdmin::CapacityAlarmThresholdList & thresholds,
      const ::CosNotification::QoSProperties & initial_qos,
      const ::CosNotification::AdminProperties & initial_admin) = 0;

    static void create_with_id_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    list_logs_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    find_log_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    list_logs_by_id_skel (
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
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:72

} // module DsNotifyLogAdmin

TAO_END_VERSIONED_NAMESPACE_DECL


#if defined (__ACE_INLINE__)
#include "DsNotifyLogAdminS.inl"
#endif /* defined INLINE */

#endif /* ifndef */

