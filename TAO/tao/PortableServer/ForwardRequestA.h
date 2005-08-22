// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:754

#ifndef _TAO_IDL_FORWARDREQUESTA_H_
#define _TAO_IDL_FORWARDREQUESTA_H_

#include /**/ "ace/pre.h"

#include "portableserver_export.h"
#include "ForwardRequestC.h"

#if (TAO_HAS_MINIMUM_POA == 0)

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:59

namespace PortableServer
{

  // TAO_IDL - Generated from
  // be\be_visitor_typecode/typecode_decl.cpp:49

  extern TAO_PortableServer_Export ::CORBA::TypeCode_ptr const _tc_ForwardRequest;

// TAO_IDL - Generated from
// be\be_visitor_module/module_ch.cpp:86

} // module PortableServer

// TAO_IDL - Generated from
// be\be_visitor_exception/any_op_ch.cpp:53

TAO_PortableServer_Export void operator<<= (CORBA::Any &, const PortableServer::ForwardRequest &); // copying version
TAO_PortableServer_Export void operator<<= (CORBA::Any &, PortableServer::ForwardRequest*); // noncopying version
TAO_PortableServer_Export CORBA::Boolean operator>>= (const CORBA::Any &, PortableServer::ForwardRequest *&); // deprecated
TAO_PortableServer_Export CORBA::Boolean operator>>= (const CORBA::Any &, const PortableServer::ForwardRequest *&);

#endif /* TAO_HAS_MINIMUM_POA == 0 */

#include /**/ "ace/post.h"

#endif /* ifndef */
