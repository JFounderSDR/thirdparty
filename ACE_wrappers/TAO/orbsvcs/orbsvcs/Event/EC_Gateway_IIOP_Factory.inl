// -*- C++ -*-
//
// $Id: EC_Gateway_IIOP_Factory.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE int
TAO_EC_Gateway_IIOP_Factory::use_ttl (void) const
{
  return this->use_ttl_;
}

ACE_INLINE int
TAO_EC_Gateway_IIOP_Factory::use_consumer_proxy_map (void) const
{
  return this->use_consumer_proxy_map_;
}

TAO_END_VERSIONED_NAMESPACE_DECL
