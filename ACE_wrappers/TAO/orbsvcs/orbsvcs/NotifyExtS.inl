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
POA_NotifyExt::EventChannelFactory::create_channel_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannelFactory * const impl =
    static_cast<POA_NotifyExt::EventChannelFactory *> (servant);
  POA_CosNotifyChannelAdmin::EventChannelFactory::create_channel_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::EventChannelFactory::get_all_channels_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannelFactory * const impl =
    static_cast<POA_NotifyExt::EventChannelFactory *> (servant);
  POA_CosNotifyChannelAdmin::EventChannelFactory::get_all_channels_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::EventChannelFactory::get_event_channel_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::EventChannelFactory * const impl =
    static_cast<POA_NotifyExt::EventChannelFactory *> (servant);
  POA_CosNotifyChannelAdmin::EventChannelFactory::get_event_channel_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::EventChannelFactory::register_callback_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_NotifyExt::ReconnectionRegistry * const impl =
    static_cast<POA_NotifyExt::EventChannelFactory *> (servant);
  POA_NotifyExt::ReconnectionRegistry::register_callback_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::EventChannelFactory::unregister_callback_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_NotifyExt::ReconnectionRegistry * const impl =
    static_cast<POA_NotifyExt::EventChannelFactory *> (servant);
  POA_NotifyExt::ReconnectionRegistry::unregister_callback_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::EventChannelFactory::is_alive_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_NotifyExt::ReconnectionRegistry * const impl =
    static_cast<POA_NotifyExt::EventChannelFactory *> (servant);
  POA_NotifyExt::ReconnectionRegistry::is_alive_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::get_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotification::QoSAdmin::get_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::set_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotification::QoSAdmin::set_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::validate_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotification::QoSAdmin::validate_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::subscription_change_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyComm::NotifySubscribe * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyComm::NotifySubscribe::subscription_change_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::add_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::add_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::remove_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::get_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::get_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::remove_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::obtain_push_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosEventChannelAdmin::ConsumerAdmin::obtain_push_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::obtain_pull_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosEventChannelAdmin::ConsumerAdmin::obtain_pull_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_get_MyID_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_MyID_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_get_MyChannel_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_MyChannel_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_get_MyOperator_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_MyOperator_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_get_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_set_priority_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_set_priority_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_get_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_set_lifetime_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_set_lifetime_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_get_pull_suppliers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_pull_suppliers_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::_get_push_suppliers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl = static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::_get_push_suppliers_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::get_proxy_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::get_proxy_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::obtain_notification_pull_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::obtain_notification_pull_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::obtain_notification_push_supplier_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::obtain_notification_push_supplier_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::ConsumerAdmin::destroy_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::ConsumerAdmin * const impl =
    static_cast<POA_NotifyExt::ConsumerAdmin *> (servant);
  POA_CosNotifyChannelAdmin::ConsumerAdmin::destroy_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::get_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotification::QoSAdmin::get_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::set_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotification::QoSAdmin::set_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::validate_qos_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotification::QoSAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotification::QoSAdmin::validate_qos_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::offer_change_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyComm::NotifyPublish * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyComm::NotifyPublish::offer_change_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::add_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::add_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::remove_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::get_filter_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_filter_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::get_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::get_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::remove_all_filters_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyFilter::FilterAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyFilter::FilterAdmin::remove_all_filters_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::obtain_push_consumer_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::SupplierAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosEventChannelAdmin::SupplierAdmin::obtain_push_consumer_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::obtain_pull_consumer_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosEventChannelAdmin::SupplierAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosEventChannelAdmin::SupplierAdmin::obtain_pull_consumer_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::_get_MyID_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl = static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::_get_MyID_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::_get_MyChannel_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl = static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::_get_MyChannel_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::_get_MyOperator_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl = static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::_get_MyOperator_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::_get_pull_consumers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl = static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::_get_pull_consumers_skel (
      server_request,
      servant_upcall,
      impl);
}

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::_get_push_consumers_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl = static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::_get_push_consumers_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::get_proxy_consumer_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::get_proxy_consumer_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::obtain_notification_pull_consumer_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::obtain_notification_pull_consumer_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::obtain_notification_push_consumer_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::obtain_notification_push_consumer_skel (
      server_request,
      servant_upcall,
      impl);
}

// TAO_IDL - Generated from
// .\be\be_interface.cpp:2223

ACE_INLINE
void
POA_NotifyExt::SupplierAdmin::destroy_skel (
    TAO_ServerRequest & server_request,
    void * servant_upcall,
    void * servant)
{
  POA_CosNotifyChannelAdmin::SupplierAdmin * const impl =
    static_cast<POA_NotifyExt::SupplierAdmin *> (servant);
  POA_CosNotifyChannelAdmin::SupplierAdmin::destroy_skel (
      server_request,
      servant_upcall,
      impl);
}


TAO_END_VERSIONED_NAMESPACE_DECL


