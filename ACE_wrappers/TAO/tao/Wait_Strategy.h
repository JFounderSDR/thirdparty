// -*- C++ -*-

//=============================================================================
/**
 *  @file    Wait_Strategy.h
 *
 *  $Id: Wait_Strategy.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *  @author  Alexander Babu Arulanthu <alex@cs.wustl.edu>
 */
//=============================================================================

#ifndef TAO_WAIT_STRATEGY_H
#define TAO_WAIT_STRATEGY_H

#include /**/ "ace/pre.h"

#include "tao/orbconf.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include /**/ "tao/TAO_Export.h"

ACE_BEGIN_VERSIONED_NAMESPACE_DECL
class ACE_Time_Value;
ACE_END_VERSIONED_NAMESPACE_DECL

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

class TAO_ORB_Core;
class TAO_Transport;
class TAO_Synch_Reply_Dispatcher;

/**
 * @class TAO_Wait_Strategy
 *
 * @brief Strategy for waiting for the reply.
 *
 */
class TAO_Export TAO_Wait_Strategy
{

public:
  /// Constructor.
  explicit TAO_Wait_Strategy (TAO_Transport *transport);

  /// Destructor.
  virtual ~TAO_Wait_Strategy (void);

  /**
   * The user is going to send a request, prepare any internal
   * variables because the reply may arrive *before* the user calls
   * wait.
   */
  virtual int sending_request (TAO_ORB_Core *orb_core, int two_way);

  /// Base class virtual method. Wait till the @c reply_received flag is
  /// true or the time expires.
  virtual int wait (ACE_Time_Value *max_wait_time,
                    TAO_Synch_Reply_Dispatcher &rd) = 0;

  /// Register the handler needs with the reactor provided that it makes
  /// sense for the strategy.
  virtual int register_handler (void) = 0;

  /// Returns a value to indicate whether the transport needs to set
  /// the socket on which it is waiting to non-blocking mode or not.
  virtual bool non_blocking (void) const = 0;

  /// Flag that indicates whether we can process requests while
  /// waiting for the reply.
  /**
   * This flag is to check whether the thread can process upcalls
   * while waiting for the reply. Some wait strategies, like
   * Wait_On_LF_No_Upcall does not allow the client threads to process
   * requests while waiting for the reply.
   */
  virtual bool can_process_upcalls (void) const = 0;

  /// Get method for the flag
  bool is_registered (void) const;

  /// Set method for the flag
  void is_registered (bool flag);

protected:
  /// Transport object.
  TAO_Transport *transport_;

  /// Flag to indicate whether the service handler that created the
  /// above transport has been registered with the reactor or not. The
  /// default is false.
  bool is_registered_;
};

TAO_END_VERSIONED_NAMESPACE_DECL


#if defined (__ACE_INLINE__)
# include "tao/Wait_Strategy.inl"
#endif /* __ACE_INLINE__ */

#include /**/ "ace/post.h"

#endif /* TAO_WAIT_STRATEGY_H */
