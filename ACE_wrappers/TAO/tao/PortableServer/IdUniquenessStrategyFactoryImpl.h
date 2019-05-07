// -*- C++ -*-

//=============================================================================
/**
 *  @file IdUniquenessStrategyFactoryImpl.h
 *
 *  $Id: IdUniquenessStrategyFactoryImpl.h 1861 2011-08-31 16:18:08Z mesnierp $
 *
 *  @author  Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================

#ifndef TAO_PORTABLESERVER_IDUNIQUENESSSTRATEGYFACTORYIMPL_H
#define TAO_PORTABLESERVER_IDUNIQUENESSSTRATEGYFACTORYIMPL_H
#include /**/ "ace/pre.h"

#include "tao/PortableServer/portableserver_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Service_Config.h"
#include "tao/PortableServer/IdUniquenessStrategyFactory.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    class TAO_PortableServer_Export IdUniquenessStrategyFactoryImpl
      : public IdUniquenessStrategyFactory
    {
    public:
      /// Create a new servant retention strategy
      virtual IdUniquenessStrategy* create (
        ::PortableServer::IdUniquenessPolicyValue value);

      virtual void destroy (
        IdUniquenessStrategy *strategy
       );
    };
  }
}

ACE_STATIC_SVC_DECLARE (IdUniquenessStrategyFactoryImpl)
ACE_FACTORY_DECLARE (TAO_PortableServer, IdUniquenessStrategyFactoryImpl)

TAO_END_VERSIONED_NAMESPACE_DECL

#include /**/ "ace/post.h"
#endif /* TAO_PORTABLESERVER_IDUNIQUENESSSTRATEGYFACTORYIMPL_H */
