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


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::my_factory_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::my_factory_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::id_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::id_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_log_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_log_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_log_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_log_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_max_record_life_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_max_record_life_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_max_record_life_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_max_record_life_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_max_size_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_max_size_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_max_size_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_max_size_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_current_size_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_current_size_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_n_records_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_n_records_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_log_full_action_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_log_full_action_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_log_full_action_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_log_full_action_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_administrative_state_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_administrative_state_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_administrative_state_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_administrative_state_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_forwarding_state_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_forwarding_state_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_forwarding_state_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_forwarding_state_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_operational_state_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_operational_state_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_interval_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_interval_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_interval_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_interval_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_availability_status_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_availability_status_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_capacity_alarm_thresholds_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_capacity_alarm_thresholds_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_capacity_alarm_thresholds_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_capacity_alarm_thresholds_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_week_mask_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_week_mask_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_week_mask_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_week_mask_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::query_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::query_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::retrieve_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::retrieve_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::match_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::match_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::delete_records_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::delete_records_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::delete_records_by_id_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::delete_records_by_id_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::write_records_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::write_records_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::write_recordlist_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::write_recordlist_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_record_attribute_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_record_attribute_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_records_attribute_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::set_records_attribute_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_record_attribute_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::get_record_attribute_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::copy_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::copy_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::copy_with_id_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::copy_with_id_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::flush_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::Log * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_DsLogAdmin::Log::flush_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::for_consumers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosEventChannelAdmin::EventChannel::for_consumers_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::for_suppliers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosEventChannelAdmin::EventChannel::for_suppliers_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::destroy_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosEventChannelAdmin::EventChannel::destroy_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotification::QoSAdmin::get_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotification::QoSAdmin::set_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::validate_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotification::QoSAdmin::validate_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_admin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::AdminPropertiesAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotification::AdminPropertiesAdmin::get_admin_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::set_admin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::AdminPropertiesAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotification::AdminPropertiesAdmin::set_admin_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::_get_MyFactory_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::_get_MyFactory_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::_get_default_consumer_admin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::_get_default_consumer_admin_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::_get_default_supplier_admin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::_get_default_supplier_admin_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::_get_default_filter_factory_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::_get_default_filter_factory_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::new_for_consumers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::new_for_consumers_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::new_for_suppliers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::new_for_suppliers_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_consumeradmin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::get_consumeradmin_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_supplieradmin_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::get_supplieradmin_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_all_consumeradmins_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::get_all_consumeradmins_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLog::get_all_supplieradmins_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannel * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLog *> (servant);
  POA_CosNotifyChannelAdmin::EventChannel::get_all_supplieradmins_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::list_logs_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::LogMgr * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_DsLogAdmin::LogMgr::list_logs_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::find_log_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::LogMgr * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_DsLogAdmin::LogMgr::find_log_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::list_logs_by_id_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_DsLogAdmin::LogMgr * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_DsLogAdmin::LogMgr::list_logs_by_id_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::get_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotification::QoSAdmin::get_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::set_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotification::QoSAdmin::set_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::validate_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotification::QoSAdmin::validate_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::subscription_change_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyComm::NotifySubscribe * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyComm::NotifySubscribe::subscription_change_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::add_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyFilter::FilterAdmin::add_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::remove_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::get_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::get_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::remove_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::obtain_push_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosEventChannelAdmin::ConsumerAdmin::obtain_push_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::obtain_pull_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosEventChannelAdmin::ConsumerAdmin::obtain_pull_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_get_MyID_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_MyID_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_get_MyChannel_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_MyChannel_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_get_MyOperator_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_MyOperator_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_get_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_set_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_set_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_get_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_set_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_set_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_get_pull_suppliers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_pull_suppliers_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::_get_push_suppliers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_push_suppliers_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::get_proxy_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::get_proxy_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::obtain_notification_pull_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::obtain_notification_pull_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::obtain_notification_push_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::obtain_notification_push_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_DsNotifyLogAdmin::NotifyLogFactory::destroy_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_DsNotifyLogAdmin::NotifyLogFactory *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::destroy_skel (
      server_request,
      servant_upcall,
      impl);
}


TAO_END_VERSIONED_NAMESPACE_DECL


