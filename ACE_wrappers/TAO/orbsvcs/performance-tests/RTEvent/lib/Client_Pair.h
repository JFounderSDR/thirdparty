/**
 * @file Client_Pair.h
 *
 * $Id: Client_Pair.h 14 2007-02-01 15:49:12Z mitza $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

#ifndef TAO_PERF_RTEC_CLIENT_PAIR_H
#define TAO_PERF_RTEC_CLIENT_PAIR_H

#include "Servant_var.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "Consumer.h"
#include "Supplier.h"

/**
 * @class Client_Pair
 *
 * @brief Simplify the initialization of a Supplier/Consumer pair
 *        connected to the event channel.
 */
class TAO_RTEC_Perf_Export Client_Pair
{
public:
  /// Constructor
  /**
   * We need a default constructor because this class is often used in
   * arrays.
   */
  Client_Pair (void);

  /// Initialize the consumer/supplier pair
  /**
   * @param experiment_id For tests that run multiple experiments
   *        this number is changed on each iteration, guaranteeing
   *        better isolation.
   * @param base_event_type The event type generated by the supplier.
   *        The Loopback_Consumer consumes the same event, the
   *        Loopback_Supplier generates (base_event_type + 1), and the
   *        consumer subscribes for that type too.
   * @param iterations The number of iterations expected on the test.
   * @param workload_in_usecs The consumer workload, in microseconds.
   * @param gsf The high resolution timer global scale factor.
   *
   */
  void init (CORBA::Long experiment_id,
             CORBA::Long base_event_type,
             CORBA::ULong iterations,
             CORBA::Long workload_in_usecs,
             ACE_UINT32 gsf,
             PortableServer::POA_ptr supplier_poa,
             PortableServer::POA_ptr consumer_poa);

  /// Initialize the consumer/supplier pair
  /**
   * This variant works as the previous one, but it allows for
   * multiple events in the supplier-side.
   *
   * @param source_event_range The number of events declared by the
   *        source.
   */
  void init (CORBA::Long experiment_id,
             CORBA::Long base_event_type,
             CORBA::Long source_event_range,
             CORBA::ULong iterations,
             CORBA::Long workload_in_usecs,
             ACE_UINT32 gsf,
             PortableServer::POA_ptr supplier_poa,
             PortableServer::POA_ptr consumer_poa);

  /// Connect to the event channel
  void connect (RtecEventChannelAdmin::EventChannel_ptr ec);

  /// Disconnect from the event channel
  void disconnect (void);

  //@{
  /** @name Accessors
   */
  Supplier *supplier (void) const;

  Consumer *consumer (void) const;
  //@}

private:
  Servant_var<Supplier> supplier_;
  Servant_var<Consumer> consumer_;
};

#if defined(__ACE_INLINE__)
#include "Client_Pair.inl"
#endif /* __ACE_INLINE__ */

#endif /* TAO_PERF_RTEC_CLIENT_PAIR_H */
