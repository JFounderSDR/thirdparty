// -*- C++ -*-
//
// $Id: Dynamic_Service.inl 935 2008-12-10 21:47:27Z mitza $

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

#if defined (ACE_USES_WCHAR)

template <class TYPE> ACE_INLINE TYPE *
ACE_Dynamic_Service<TYPE>::instance (const ACE_ANTI_TCHAR *name)
{
  return instance (ACE_TEXT_CHAR_TO_TCHAR (name),false);
}

template <class TYPE> ACE_INLINE TYPE *
ACE_Dynamic_Service<TYPE>::instance (const ACE_ANTI_TCHAR *name,
                                     bool no_global)
{
  return instance (ACE_TEXT_CHAR_TO_TCHAR (name),no_global);
}

template <class TYPE> ACE_INLINE TYPE *
ACE_Dynamic_Service<TYPE>::instance (const ACE_Service_Gestalt* repo,
                                     const ACE_ANTI_TCHAR *name)
{
  return instance (repo, ACE_TEXT_CHAR_TO_TCHAR (name),false);
}

template <class TYPE> ACE_INLINE TYPE *
ACE_Dynamic_Service<TYPE>::instance (const ACE_Service_Gestalt* repo,
                                     const ACE_ANTI_TCHAR *name,
                                     bool no_global)
{
  return instance (repo, ACE_TEXT_CHAR_TO_TCHAR (name),no_global);
}

#endif  // ACE_USES_WCHAR

ACE_END_VERSIONED_NAMESPACE_DECL
