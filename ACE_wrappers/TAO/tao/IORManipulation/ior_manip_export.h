
// -*- C++ -*-
// $Id: ior_manip_export.h 14 2007-02-01 15:49:12Z mitza $
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl
// ------------------------------
#ifndef TAO_IORMANIP_EXPORT_H
#define TAO_IORMANIP_EXPORT_H

#include "ace/config-all.h"

#if defined (TAO_AS_STATIC_LIBS)
#  if !defined (TAO_IORMANIP_HAS_DLL)
#    define TAO_IORMANIP_HAS_DLL 0
#  endif /* ! TAO_IORMANIP_HAS_DLL */
#else
#  if !defined (TAO_IORMANIP_HAS_DLL)
#    define TAO_IORMANIP_HAS_DLL 1
#  endif /* ! TAO_IORMANIP_HAS_DLL */
#endif

#if defined (TAO_IORMANIP_HAS_DLL) && (TAO_IORMANIP_HAS_DLL == 1)
#  if defined (TAO_IORMANIP_BUILD_DLL)
#    define TAO_IORManip_Export ACE_Proper_Export_Flag
#    define TAO_IORMANIP_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TAO_IORMANIP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAO_IORMANIP_BUILD_DLL */
#    define TAO_IORManip_Export ACE_Proper_Import_Flag
#    define TAO_IORMANIP_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TAO_IORMANIP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAO_IORMANIP_BUILD_DLL */
#else /* TAO_IORMANIP_HAS_DLL == 1 */
#  define TAO_IORManip_Export
#  define TAO_IORMANIP_SINGLETON_DECLARATION(T)
#  define TAO_IORMANIP_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAO_IORMANIP_HAS_DLL == 1 */

#endif /* TAO_IORMANIP_EXPORT_H */

// End of auto generated file.
