// -*- C++ -*-
// $Id: ImplicitActivationStrategy.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "tao/PortableServer/ImplicitActivationStrategy.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    void
    ImplicitActivationStrategy::strategy_init (TAO_Root_POA * /*poa*/)
    {
      // dependent on type create the correct strategy.
    }

    void
    ImplicitActivationStrategy::strategy_cleanup (void)
    {
    }
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL
