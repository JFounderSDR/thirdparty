/* -*- C++ -*- $Id: eventlog_serv_export.h 14 2007-02-01 15:49:12Z mitza $ */
// generate_export_file.pl,v 1.8 2001/03/04 09:16:29 nanbor Exp
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl
// ------------------------------
#ifndef TAO_EVENTLOG_SERV_EXPORT_H
#define TAO_EVENTLOG_SERV_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (TAO_EVENTLOG_SERV_HAS_DLL)
#  define TAO_EVENTLOG_SERV_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && TAO_EVENTLOG_SERV_HAS_DLL */

#if !defined (TAO_EVENTLOG_SERV_HAS_DLL)
#  define TAO_EVENTLOG_SERV_HAS_DLL 1
#endif /* ! TAO_EVENTLOG_SERV_HAS_DLL */

#if defined (TAO_EVENTLOG_SERV_HAS_DLL) && (TAO_EVENTLOG_SERV_HAS_DLL == 1)
#  if defined (TAO_EVENTLOG_SERV_BUILD_DLL)
#    define TAO_EventLog_Serv_Export ACE_Proper_Export_Flag
#    define TAO_EVENTLOG_SERV_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TAO_EVENTLOG_SERV_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAO_EVENTLOG_SERV_BUILD_DLL */
#    define TAO_EventLog_Serv_Export ACE_Proper_Import_Flag
#    define TAO_EVENTLOG_SERV_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TAO_EVENTLOG_SERV_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAO_EVENTLOG_SERV_BUILD_DLL */
#else /* TAO_EVENTLOG_SERV_HAS_DLL == 1 */
#  define TAO_EventLog_Serv_Export
#  define TAO_EVENTLOG_SERV_SINGLETON_DECLARATION(T)
#  define TAO_EVENTLOG_SERV_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAO_EVENTLOG_SERV_HAS_DLL == 1 */

#endif /* TAO_EVENTLOG_SERV_EXPORT_H */

// End of auto generated file.
