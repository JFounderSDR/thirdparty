// -*- C++ -*-

//=============================================================================
/**
 *  @file IdUniquenessPolicy.h
 *
 *  $Id: IdUniquenessPolicy.h 935 2008-12-10 21:47:27Z mitza $
 *
 *  @author  Johnny Willemsen  <jwillemsen@remedy.nl>
 */
//=============================================================================

#ifndef TAO_PORTABLESERVER_IDUNIQUENESSTPOLICY_H
#define TAO_PORTABLESERVER_IDUNIQUENESSTPOLICY_H
#include /**/ "ace/pre.h"

#include "tao/PortableServer/portableserver_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/PortableServer/IdUniquenessPolicyC.h"
#include "tao/LocalObject.h"

// This is to remove "inherits via dominance" warnings from MSVC.
// MSVC is being a little too paranoid.
#if defined(_MSC_VER)
#pragma warning(push)
#pragma warning(disable:4250)
#endif /* _MSC_VER */

#if !defined (CORBA_E_MICRO)

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace TAO
{
  namespace Portable_Server
  {
    class TAO_PortableServer_Export IdUniquenessPolicy
      : public virtual ::PortableServer::IdUniquenessPolicy,
        public virtual ::CORBA::LocalObject
    {
    public:
      IdUniquenessPolicy (::PortableServer::IdUniquenessPolicyValue value);

      CORBA::Policy_ptr copy (void);

      void destroy (void);

      ::PortableServer::IdUniquenessPolicyValue value (void);

      CORBA::PolicyType policy_type (void);

      /// Return the cached policy type for this policy.
      virtual TAO_Cached_Policy_Type _tao_cached_type (void) const;

      /// Returns the scope at which this policy can be applied. See orbconf.h.
      virtual TAO_Policy_Scope _tao_scope (void) const;

    private:
      ::PortableServer::IdUniquenessPolicyValue value_;
    };
  }
}

TAO_END_VERSIONED_NAMESPACE_DECL

#endif

#if defined(_MSC_VER)
#pragma warning(pop)
#endif /* _MSC_VER */

#include /**/ "ace/post.h"
#endif /* TAO_PORTABLESERVER_IDUNIQUENESSTPOLICY_H */
