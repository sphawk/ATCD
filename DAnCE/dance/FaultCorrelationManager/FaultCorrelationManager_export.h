
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl FAULTCORRELATIONMANAGER
// ------------------------------
#ifndef FAULTCORRELATIONMANAGER_EXPORT_H
#define FAULTCORRELATIONMANAGER_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (FAULTCORRELATIONMANAGER_HAS_DLL)
#  define FAULTCORRELATIONMANAGER_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && FAULTCORRELATIONMANAGER_HAS_DLL */

#if !defined (FAULTCORRELATIONMANAGER_HAS_DLL)
#  define FAULTCORRELATIONMANAGER_HAS_DLL 1
#endif /* ! FAULTCORRELATIONMANAGER_HAS_DLL */

#if defined (FAULTCORRELATIONMANAGER_HAS_DLL) && (FAULTCORRELATIONMANAGER_HAS_DLL == 1)
#  if defined (FAULTCORRELATIONMANAGER_BUILD_DLL)
#    define FAULTCORRELATIONMANAGER_Export ACE_Proper_Export_Flag
#    define FAULTCORRELATIONMANAGER_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define FAULTCORRELATIONMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* FAULTCORRELATIONMANAGER_BUILD_DLL */
#    define FAULTCORRELATIONMANAGER_Export ACE_Proper_Import_Flag
#    define FAULTCORRELATIONMANAGER_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define FAULTCORRELATIONMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* FAULTCORRELATIONMANAGER_BUILD_DLL */
#else /* FAULTCORRELATIONMANAGER_HAS_DLL == 1 */
#  define FAULTCORRELATIONMANAGER_Export
#  define FAULTCORRELATIONMANAGER_SINGLETON_DECLARATION(T)
#  define FAULTCORRELATIONMANAGER_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* FAULTCORRELATIONMANAGER_HAS_DLL == 1 */

// Set FAULTCORRELATIONMANAGER_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (FAULTCORRELATIONMANAGER_NTRACE)
#  if (ACE_NTRACE == 1)
#    define FAULTCORRELATIONMANAGER_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define FAULTCORRELATIONMANAGER_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !FAULTCORRELATIONMANAGER_NTRACE */

#if (FAULTCORRELATIONMANAGER_NTRACE == 1)
#  define FAULTCORRELATIONMANAGER_TRACE(X)
#else /* (FAULTCORRELATIONMANAGER_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define FAULTCORRELATIONMANAGER_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (FAULTCORRELATIONMANAGER_NTRACE == 1) */

#endif /* FAULTCORRELATIONMANAGER_EXPORT_H */

// End of auto generated file.
