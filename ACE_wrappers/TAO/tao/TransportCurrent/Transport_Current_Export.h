
// -*- C++ -*-
// $Id: Transport_Current_Export.h 14 2007-02-01 15:49:12Z mitza $
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl -d TAO_Transport_Current
// ------------------------------
#ifndef TAO_TRANSPORT_CURRENT_EXPORT_H
#define TAO_TRANSPORT_CURRENT_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (TAO_TRANSPORT_CURRENT_HAS_DLL)
#  define TAO_TRANSPORT_CURRENT_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && TAO_TRANSPORT_CURRENT_HAS_DLL */

#if !defined (TAO_TRANSPORT_CURRENT_HAS_DLL)
#  define TAO_TRANSPORT_CURRENT_HAS_DLL 1
#endif /* ! TAO_TRANSPORT_CURRENT_HAS_DLL */

#if defined (TAO_TRANSPORT_CURRENT_HAS_DLL) && (TAO_TRANSPORT_CURRENT_HAS_DLL == 1)
#  if defined (TAO_TRANSPORT_CURRENT_BUILD_DLL)
#    define TAO_Transport_Current_Export ACE_Proper_Export_Flag
#    define TAO_TRANSPORT_CURRENT_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TAO_TRANSPORT_CURRENT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAO_TRANSPORT_CURRENT_BUILD_DLL */
#    define TAO_Transport_Current_Export ACE_Proper_Import_Flag
#    define TAO_TRANSPORT_CURRENT_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TAO_TRANSPORT_CURRENT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAO_TRANSPORT_CURRENT_BUILD_DLL */
#else /* TAO_TRANSPORT_CURRENT_HAS_DLL == 1 */
#  define TAO_Transport_Current_Export
#  define TAO_TRANSPORT_CURRENT_SINGLETON_DECLARATION(T)
#  define TAO_TRANSPORT_CURRENT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAO_TRANSPORT_CURRENT_HAS_DLL == 1 */

// Set TAO_TRANSPORT_CURRENT_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (TAO_TRANSPORT_CURRENT_NTRACE)
#  if (ACE_NTRACE == 1)
#    define TAO_TRANSPORT_CURRENT_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define TAO_TRANSPORT_CURRENT_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !TAO_TRANSPORT_CURRENT_NTRACE */

#if (TAO_TRANSPORT_CURRENT_NTRACE == 1)
#  define TAO_TRANSPORT_CURRENT_TRACE(X)
#else /* (TAO_TRANSPORT_CURRENT_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define TAO_TRANSPORT_CURRENT_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (TAO_TRANSPORT_CURRENT_NTRACE == 1) */

#endif /* TAO_TRANSPORT_CURRENT_EXPORT_H */

// End of auto generated file.
