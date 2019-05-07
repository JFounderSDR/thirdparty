// -*- C++ -*-
// $Id$

/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.0a
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 *       http://www.cs.wustl.edu/~schmidt/doc-center.html
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       http://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     http://www.cs.wustl.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from 
// .\be\be_codegen.cpp:726

#ifndef _TAO_IDL_RTECEVENTCHANNELADMINS_T_PQLBES_CPP_
#define _TAO_IDL_RTECEVENTCHANNELADMINS_T_PQLBES_CPP_

#include "RtecEventChannelAdminS_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::ProxyPushSupplier_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::ProxyPushSupplier_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::ProxyPushSupplier_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::ProxyPushSupplier_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::~ProxyPushSupplier_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->ProxyPushSupplier::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::disconnect_push_supplier  (
  void)
{
  this->ptr_->disconnect_push_supplier (
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::connect_push_consumer  (
  ::RtecEventComm::PushConsumer_ptr push_consumer,
  const ::RtecEventChannelAdmin::ConsumerQOS & qos)
{
  this->ptr_->connect_push_consumer (
    push_consumer,
    qos
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::suspend_connection  (
  void)
{
  this->ptr_->suspend_connection (
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::ProxyPushSupplier_tie<T>::resume_connection  (
  void)
{
  this->ptr_->resume_connection (
  );
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::ProxyPushConsumer_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::ProxyPushConsumer_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::ProxyPushConsumer_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::ProxyPushConsumer_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::~ProxyPushConsumer_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->ProxyPushConsumer::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::push  (
  const ::RtecEventComm::EventSet & data)
{
  this->ptr_->push (
    data
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::disconnect_push_consumer  (
  void)
{
  this->ptr_->disconnect_push_consumer (
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::ProxyPushConsumer_tie<T>::connect_push_supplier  (
  ::RtecEventComm::PushSupplier_ptr push_supplier,
  const ::RtecEventChannelAdmin::SupplierQOS & qos)
{
  this->ptr_->connect_push_supplier (
    push_supplier,
    qos
  );
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::ConsumerAdmin_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::ConsumerAdmin_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::ConsumerAdmin_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::ConsumerAdmin_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::~ConsumerAdmin_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->ConsumerAdmin::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
::RtecEventChannelAdmin::ProxyPushSupplier_ptr POA_RtecEventChannelAdmin::ConsumerAdmin_tie<T>::obtain_push_supplier  (
  void)
{
  return this->ptr_->obtain_push_supplier (
  );
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::SupplierAdmin_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::SupplierAdmin_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::SupplierAdmin_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::SupplierAdmin_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::~SupplierAdmin_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->SupplierAdmin::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
::RtecEventChannelAdmin::ProxyPushConsumer_ptr POA_RtecEventChannelAdmin::SupplierAdmin_tie<T>::obtain_push_consumer  (
  void)
{
  return this->ptr_->obtain_push_consumer (
  );
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventChannelAdmin::Observer_tie<T>::Observer_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventChannelAdmin::Observer_tie<T>::Observer_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventChannelAdmin::Observer_tie<T>::Observer_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::Observer_tie<T>::Observer_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::Observer_tie<T>::~Observer_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventChannelAdmin::Observer_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventChannelAdmin::Observer_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventChannelAdmin::Observer_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventChannelAdmin::Observer_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventChannelAdmin::Observer_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventChannelAdmin::Observer_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->Observer::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::Observer_tie<T>::update_consumer  (
  const ::RtecEventChannelAdmin::ConsumerQOS & sub)
{
  this->ptr_->update_consumer (
    sub
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::Observer_tie<T>::update_supplier  (
  const ::RtecEventChannelAdmin::SupplierQOS & pub)
{
  this->ptr_->update_supplier (
    pub
  );
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventChannelAdmin::EventChannel_tie<T>::EventChannel_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventChannelAdmin::EventChannel_tie<T>::EventChannel_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventChannelAdmin::EventChannel_tie<T>::EventChannel_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::EventChannel_tie<T>::EventChannel_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventChannelAdmin::EventChannel_tie<T>::~EventChannel_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventChannelAdmin::EventChannel_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventChannelAdmin::EventChannel_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventChannelAdmin::EventChannel_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventChannelAdmin::EventChannel_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventChannelAdmin::EventChannel_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventChannelAdmin::EventChannel_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->EventChannel::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
::RtecEventChannelAdmin::ConsumerAdmin_ptr POA_RtecEventChannelAdmin::EventChannel_tie<T>::for_consumers  (
  void)
{
  return this->ptr_->for_consumers (
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
::RtecEventChannelAdmin::SupplierAdmin_ptr POA_RtecEventChannelAdmin::EventChannel_tie<T>::for_suppliers  (
  void)
{
  return this->ptr_->for_suppliers (
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::EventChannel_tie<T>::destroy  (
  void)
{
  this->ptr_->destroy (
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
::RtecEventChannelAdmin::Observer_Handle POA_RtecEventChannelAdmin::EventChannel_tie<T>::append_observer  (
  ::RtecEventChannelAdmin::Observer_ptr gw)
{
  return this->ptr_->append_observer (
    gw
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventChannelAdmin::EventChannel_tie<T>::remove_observer  (
  ::RtecEventChannelAdmin::Observer_Handle gw)
{
  this->ptr_->remove_observer (
    gw
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL


#endif /* ifndef */

