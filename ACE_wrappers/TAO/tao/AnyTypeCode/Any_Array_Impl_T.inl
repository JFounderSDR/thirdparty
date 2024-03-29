// -*- C++ -*-
//
// $Id: Any_Array_Impl_T.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template<typename T_slice, typename T_forany>
ACE_INLINE
CORBA::Boolean
TAO::Any_Array_Impl_T<T_slice, T_forany>::demarshal_value (TAO_InputCDR &cdr)
{
  T_forany tmp (this->value_);
  return (cdr >> tmp);
}

TAO_END_VERSIONED_NAMESPACE_DECL
