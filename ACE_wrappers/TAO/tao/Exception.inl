// -*- C++ -*-
//
// $Id: Exception.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE CORBA::Exception *
CORBA::Exception::_downcast (CORBA::Exception * x)
{
  return x;
}

ACE_INLINE CORBA::Exception const *
CORBA::Exception::_downcast (CORBA::Exception const * x)
{
  return x;
}

TAO_END_VERSIONED_NAMESPACE_DECL
