// -*- C++ -*-
//
// $Id: CEC_SupplierAdmin.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE void
TAO_CEC_SupplierAdmin::
    for_each (TAO_ESF_Worker<TAO_CEC_ProxyPushConsumer> *worker)
{
  this->push_admin_.for_each (worker);
}

ACE_INLINE void
TAO_CEC_SupplierAdmin::
    for_each (TAO_ESF_Worker<TAO_CEC_ProxyPullConsumer> *worker)
{
  this->pull_admin_.for_each (worker);
}

TAO_END_VERSIONED_NAMESPACE_DECL
