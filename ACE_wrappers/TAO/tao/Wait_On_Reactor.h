// -*- C++ -*-

//=============================================================================
/**
 *  @file    Wait_On_Reactor.h
 *
 *  $Id: Wait_On_Reactor.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *  @author  Alexander Babu Arulanthu <alex@cs.wustl.edu>
 */
//=============================================================================

#ifndef TAO_WAIT_ON_REACTOR_H
#define TAO_WAIT_ON_REACTOR_H

#include /**/ "ace/pre.h"

#include "tao/Wait_Strategy.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

/**
 * @class TAO_Wait_On_Reactor
 *
 * Wait on the Reactor. Happens in a single threaded client environment.
 *
 */
class TAO_Wait_On_Reactor : public TAO_Wait_Strategy
{

public:
  /// Constructor.
  explicit TAO_Wait_On_Reactor (TAO_Transport *transport);

  /// Destructor.
  virtual ~TAO_Wait_On_Reactor (void);

  /*! @copydoc TAO_Wait_Strategy::wait() */
  virtual int wait (ACE_Time_Value *max_wait_time,
                    TAO_Synch_Reply_Dispatcher &rd);

  /*! @copydoc TAO_Wait_Strategy::register_handler() */
  virtual int register_handler (void);

  /*! @copydoc TAO_Wait_Strategy::non_blocking() */
  virtual bool non_blocking (void) const;

  /*! @copydoc TAO_Wait_Strategy::can_process_upcalls() */
  virtual bool can_process_upcalls (void) const;
};

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"

#endif /* TAO_WAIT_ON_REACTOR_H */
