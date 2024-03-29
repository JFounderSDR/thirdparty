// -*- C++ -*-
// $Id: SCIOP_Endpoint.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE const char *
TAO_SCIOP_Endpoint::host (void) const
{
  return this->host_.in ();
}

ACE_INLINE CORBA::UShort
TAO_SCIOP_Endpoint::port (void) const
{
  return this->port_;
}

ACE_INLINE CORBA::UShort
TAO_SCIOP_Endpoint::port (CORBA::UShort p)
{
  return this->port_ = p;
}

TAO_END_VERSIONED_NAMESPACE_DECL
