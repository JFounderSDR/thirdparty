// $Id: LFU_Connection_Purging_Strategy.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "tao/Strategies/LFU_Connection_Purging_Strategy.h"
#include "tao/Transport.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_LFU_Connection_Purging_Strategy::TAO_LFU_Connection_Purging_Strategy (
                                                           int cache_maximum)
: TAO_Connection_Purging_Strategy (cache_maximum)
{
}

void
TAO_LFU_Connection_Purging_Strategy::update_item (TAO_Transport& transport)
{
  transport.purging_order (transport.purging_order () + 1);
}

TAO_END_VERSIONED_NAMESPACE_DECL
