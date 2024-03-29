// -*- C++ -*-
// $Id: LF_Follower_Auto_Ptr.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "tao/LF_Follower_Auto_Ptr.h"

#if !defined (__ACE_INLINE__)
# include "tao/LF_Follower_Auto_Ptr.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO_LF_Follower_Auto_Ptr::~TAO_LF_Follower_Auto_Ptr (void)
{
  this->leader_follower_.release_follower (this->follower_);
}

TAO_END_VERSIONED_NAMESPACE_DECL
