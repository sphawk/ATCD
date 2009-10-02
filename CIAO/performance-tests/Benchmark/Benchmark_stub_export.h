// -*- C++ -*-
//
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v1.7.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 *       http://doc.ece.uci.edu/
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

#ifndef BENCHMARK_STUB_EXPORT_H
#define BENCHMARK_STUB_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (BENCHMARK_STUB_HAS_DLL)
#  define BENCHMARK_STUB_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && BENCHMARK_STUB_HAS_DLL */

#if !defined (BENCHMARK_STUB_HAS_DLL)
#  define BENCHMARK_STUB_HAS_DLL 1
#endif /* ! BENCHMARK_STUB_HAS_DLL */

#if defined (BENCHMARK_STUB_HAS_DLL) && (BENCHMARK_STUB_HAS_DLL == 1)
#  if defined (BENCHMARK_STUB_BUILD_DLL)
#    define BENCHMARK_STUB_Export ACE_Proper_Export_Flag
#    define BENCHMARK_STUB_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define BENCHMARK_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* BENCHMARK_STUB_BUILD_DLL */
#    define BENCHMARK_STUB_Export ACE_Proper_Import_Flag
#    define BENCHMARK_STUB_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define BENCHMARK_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* BENCHMARK_STUB_BUILD_DLL */
#else /* BENCHMARK_STUB_HAS_DLL == 1 */
#  define BENCHMARK_STUB_Export
#  define BENCHMARK_STUB_SINGLETON_DECLARATION(T)
#  define BENCHMARK_STUB_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* BENCHMARK_STUB_HAS_DLL == 1 */

// Set BENCHMARK_STUB_NTRACE = 0 to turn on library-specific
// tracing even if tracing is turned off for ACE.
#if !defined (BENCHMARK_STUB_NTRACE)
#  if (ACE_NTRACE == 1)
#    define BENCHMARK_STUB_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define BENCHMARK_STUB_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !BENCHMARK_STUB_NTRACE */

#if (BENCHMARK_STUB_NTRACE == 1)
#  define BENCHMARK_STUB_TRACE(X)
#else /* (BENCHMARK_STUB_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define BENCHMARK_STUB_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (BENCHMARK_STUB_NTRACE == 1) */

#endif /* BENCHMARK_STUB_EXPORT_H */

