/**
 * @file EC_Channel_Destroyer.cpp
 *
 * $Id: EC_Channel_Destroyer.cpp 935 2008-12-10 21:47:27Z mitza $
 *
 * @author Marina Spivak <marina@atdesk.com>
 */

#include "orbsvcs/Event/EC_Channel_Destroyer.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void
TAO_EC_Channel_Destroyer_Functor::operator() (
                           TAO_EC_Event_Channel_Base * event_channel) throw ()
{
  try
    {
      event_channel->destroy ();
    }
  catch (...)
    {
    }
}

TAO_END_VERSIONED_NAMESPACE_DECL
