// -*- C++ -*-

//=============================================================================
/**
 *  @file   Fault_Listener.h
 *
 *  $Id: Fault_Listener.h 14 2007-02-01 15:49:12Z mitza $
 *
 *  @author Huang-Ming Huang <hh1@cse.wustl.edu>
 */
//=============================================================================

#ifndef TAO_FTEC_FAULT_LISTENER_H
#define TAO_FTEC_FAULT_LISTENER_H

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Versioned_Namespace.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

class TAO_FTEC_Fault_Listener
{
public:
  virtual ~TAO_FTEC_Fault_Listener(){};
  virtual void connection_closed()=0;
};

TAO_END_VERSIONED_NAMESPACE_DECL

#endif
