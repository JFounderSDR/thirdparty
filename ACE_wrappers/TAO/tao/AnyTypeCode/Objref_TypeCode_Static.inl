// -*- C++ -*-
//
// $Id: Objref_TypeCode_Static.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO::TypeCode::Objref<char const *, TAO::Null_RefCount_Policy>::Objref (
  CORBA::TCKind kind,
  char const * id,
  char const * name)
  : ::CORBA::TypeCode (kind)
  , ::TAO::Null_RefCount_Policy ()
  , attributes_ (id, name)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
