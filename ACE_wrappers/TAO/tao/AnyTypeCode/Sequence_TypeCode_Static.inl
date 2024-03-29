// -*- C++ -*-
//
// $Id: Sequence_TypeCode_Static.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
TAO::TypeCode::Sequence<CORBA::TypeCode_ptr const *,
                        TAO::Null_RefCount_Policy>::Sequence (
  CORBA::TCKind kind,
  CORBA::TypeCode_ptr const * content_type,
  CORBA::ULong length)
  : ::CORBA::TypeCode (kind)
  , ::TAO::Null_RefCount_Policy ()
  , content_type_ (content_type)
  , length_ (length)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
