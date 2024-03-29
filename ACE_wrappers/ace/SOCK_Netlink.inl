// $Id: SOCK_Netlink.inl 14 2007-02-01 15:49:12Z mitza $

#ifdef  ACE_HAS_NETLINK

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE
ACE_SOCK_Netlink::ACE_SOCK_Netlink (void)
{
  ACE_TRACE ("ACE_SOCK_Netlink::ACE_SOCK_Netlink");
}

ACE_INLINE
ACE_SOCK_Netlink::~ACE_SOCK_Netlink (void)
{
  ACE_TRACE ("ACE_SOCK_Netlink::~ACE_SOCK_Netlink");
}

ACE_INLINE ssize_t ACE_SOCK_Netlink::recv ( void *buf,
                                            size_t n,
                                            int flags) const
{
  ACE_TRACE ("ACE_SOCK_Netlink::recv");
  return  ACE_OS::recv (this->get_handle (),(char *) buf,n,flags);
}

ACE_INLINE ssize_t ACE_SOCK_Netlink::send (void *buf,
                                           size_t n,
                                           int flags) const
{
  ACE_TRACE ("ACE_SOCK_Netlink::send");
  return  ACE_OS::send (this->get_handle (),(char *) buf,n,flags);
}

ACE_END_VERSIONED_NAMESPACE_DECL

#endif /* ACE_HAS_NETLINK */
