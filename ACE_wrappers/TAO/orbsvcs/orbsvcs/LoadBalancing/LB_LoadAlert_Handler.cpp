// $Id: LB_LoadAlert_Handler.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "orbsvcs/LoadBalancing/LB_LoadAlert_Handler.h"
#include "tao/debug.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_LB_LoadAlert_Handler::~TAO_LB_LoadAlert_Handler (void)
{
}

void
TAO_LB_LoadAlert_Handler::enable_alert (void)
{
}

void
TAO_LB_LoadAlert_Handler::enable_alert_excep (
    ::Messaging::ExceptionHolder *)
{
  if (TAO_debug_level > 0)
    ACE_ERROR ((LM_ERROR,
                ACE_TEXT ("Exception caught when invoking ")
                ACE_TEXT ("LoadAlert::enable_alert()\n")));
}

void
TAO_LB_LoadAlert_Handler::disable_alert (void)
{
}

void
TAO_LB_LoadAlert_Handler::disable_alert_excep (::Messaging::ExceptionHolder *)
{
  if (TAO_debug_level > 0)
    ACE_ERROR ((LM_ERROR,
                ACE_TEXT ("Exception caught when invoking ")
                ACE_TEXT ("LoadAlert::disable_alert()\n")));
}

TAO_END_VERSIONED_NAMESPACE_DECL
