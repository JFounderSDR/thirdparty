// -*- C++ -*-
//
// $Id: Unbounded_Set.inl 1861 2011-08-31 16:18:08Z mesnierp $

#include "ace/Global_Macros.h"

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

template <typename T> ACE_INLINE bool
ACE_Unbounded_Set_Default_Comparator<T>::operator () (const T  &lhs, const T &rhs) const
{
  return lhs == rhs;
}

template<typename T>
ACE_Unbounded_Set_Iterator<T>::ACE_Unbounded_Set_Iterator (ACE_Unbounded_Set<T> &s,
                                                           bool end)
  : base_type (s, end)
{
}

template<typename T>
ACE_Unbounded_Set_Iterator<T>::ACE_Unbounded_Set_Iterator (const base_type & s)
  : base_type  (s)
{
}

template<typename T>
ACE_Unbounded_Set_Const_Iterator<T>::
ACE_Unbounded_Set_Const_Iterator (const ACE_Unbounded_Set<T> &s,
                                  bool end)
  : base_type (s, end)
{
}

template<typename T>
ACE_Unbounded_Set_Const_Iterator<T>::ACE_Unbounded_Set_Const_Iterator (const base_type & s)
  : base_type  (s)
{
}

template<typename T>
ACE_Unbounded_Set<T>::ACE_Unbounded_Set (ACE_Allocator *alloc)
  : ACE_Unbounded_Set_Ex<T, ACE_Unbounded_Set_Default_Comparator<T> > (alloc)
{
}


ACE_END_VERSIONED_NAMESPACE_DECL
