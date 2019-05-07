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

#ifndef _TAO_IDL_RTECEVENTCOMMS_T_7P84O4_CPP_
#define _TAO_IDL_RTECEVENTCOMMS_T_7P84O4_CPP_

#include "RtecEventCommS_T.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventComm::PushConsumer_tie<T>::PushConsumer_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventComm::PushConsumer_tie<T>::PushConsumer_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventComm::PushConsumer_tie<T>::PushConsumer_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventComm::PushConsumer_tie<T>::PushConsumer_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventComm::PushConsumer_tie<T>::~PushConsumer_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventComm::PushConsumer_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventComm::PushConsumer_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventComm::PushConsumer_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventComm::PushConsumer_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventComm::PushConsumer_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventComm::PushConsumer_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->PushConsumer::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventComm::PushConsumer_tie<T>::push  (
  const ::RtecEventComm::EventSet & data)
{
  this->ptr_->push (
    data
  );
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventComm::PushConsumer_tie<T>::disconnect_push_consumer  (
  void)
{
  this->ptr_->disconnect_push_consumer (
  );
}

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_ss.cpp:86

template <class T>
POA_RtecEventComm::PushSupplier_tie<T>::PushSupplier_tie (T &t)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (false)
{}

template <class T> 
POA_RtecEventComm::PushSupplier_tie<T>::PushSupplier_tie (T &t, ::PortableServer::POA_ptr poa)
	: ptr_ (&t),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (false)
{}

template <class T>
POA_RtecEventComm::PushSupplier_tie<T>::PushSupplier_tie (T *tp, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_nil ()),
	  rel_ (release)
{}

template <class T>
POA_RtecEventComm::PushSupplier_tie<T>::PushSupplier_tie (T *tp, ::PortableServer::POA_ptr poa, ::CORBA::Boolean release)
	: ptr_ (tp),
	  poa_ ( ::PortableServer::POA::_duplicate (poa)),
	  rel_ (release)
{}

template <class T>
POA_RtecEventComm::PushSupplier_tie<T>::~PushSupplier_tie (void)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
}

template <class T> T *
POA_RtecEventComm::PushSupplier_tie<T>::_tied_object (void)
{
  return this->ptr_;
}

template <class T> void
POA_RtecEventComm::PushSupplier_tie<T>::_tied_object (T &obj)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = &obj;
  this->rel_ = false;
}

template <class T> void
POA_RtecEventComm::PushSupplier_tie<T>::_tied_object (T *obj, ::CORBA::Boolean release)
{
  if (this->rel_)
    {
      delete this->ptr_;
    }
  
  this->ptr_ = obj;
  this->rel_ = release;
}

template <class T>  ::CORBA::Boolean
POA_RtecEventComm::PushSupplier_tie<T>::_is_owner (void)
{
  return this->rel_;
}

template <class T> void
POA_RtecEventComm::PushSupplier_tie<T>::_is_owner ( ::CORBA::Boolean b)
{
  this->rel_ = b;
}

template <class T> PortableServer::POA_ptr
POA_RtecEventComm::PushSupplier_tie<T>::_default_POA ()
{
  if (! ::CORBA::is_nil (this->poa_.in ()))
    {
      return ::PortableServer::POA::_duplicate (this->poa_.in ());
    }
  
  return this->PushSupplier::_default_POA ();
}

// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_ss.cpp:98

template <class T>
void POA_RtecEventComm::PushSupplier_tie<T>::disconnect_push_supplier  (
  void)
{
  this->ptr_->disconnect_push_supplier (
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL


#endif /* ifndef */

