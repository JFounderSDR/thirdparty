// -*- C++ -*-
//
// $Id: Union_TypeCode.inl 935 2008-12-10 21:47:27Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template <typename StringType,
          typename TypeCodeType,
          class CaseArrayType,
          class RefCountPolicy>
ACE_INLINE
TAO::TypeCode::Union<StringType,
                     TypeCodeType,
                     CaseArrayType,
                     RefCountPolicy>::Union (
  char const * id,
  char const * name,
  TypeCodeType const & discriminant_type,
  CaseArrayType const & cases,
  CORBA::ULong ncases,
  CORBA::Long default_index)
  : ::CORBA::TypeCode (CORBA::tk_union)
  , RefCountPolicy ()
  , base_attributes_ (id, name)
  , discriminant_type_ (discriminant_type)
  , default_index_ (default_index)
  , ncases_ (ncases)
  , cases_ (cases)
{
}

template <typename StringType,
          typename TypeCodeType,
          class CaseArrayType,
          class RefCountPolicy>
ACE_INLINE
TAO::TypeCode::Union<StringType,
                     TypeCodeType,
                     CaseArrayType,
                     RefCountPolicy>::Union (
  CORBA::TCKind,
  char const * id)
  : ::CORBA::TypeCode (CORBA::tk_union)
  , RefCountPolicy ()
  , base_attributes_ (id)
  , discriminant_type_ (0)
  , default_index_ (-1)
  , ncases_ (0)
  , cases_ ()
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
