// -*- C++ -*-
//
// $Id: Malloc.inl 14 2007-02-01 15:49:12Z mitza $

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
ACE_Control_Block::ACE_Name_Node::~ACE_Name_Node (void)
{
}

ACE_INLINE void
ACE_Control_Block::ACE_Malloc_Header::init_ptr
  (ACE_Malloc_Header **ptr, ACE_Malloc_Header *init, void *)
{
  *ptr = init;
}

ACE_INLINE void
ACE_Control_Block::ACE_Name_Node::init_ptr
  (ACE_Name_Node **ptr, ACE_Name_Node *init, void *)
{
  *ptr = init;
}

ACE_END_VERSIONED_NAMESPACE_DECL
