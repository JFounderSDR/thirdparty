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
// .\be\be_codegen.cpp:598

#ifndef _TAO_IDL_COSEVENTCOMMS_T_3LRLFB_H_
#define _TAO_IDL_COSEVENTCOMMS_T_3LRLFB_H_



TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_sth.cpp:70

namespace POA_CosEventComm
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  PushConsumer_tie : public PushConsumer
  {
  public:
    /// the T& ctor
    PushConsumer_tie (T &t);
    /// ctor taking a POA
    PushConsumer_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    PushConsumer_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    PushConsumer_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~PushConsumer_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void push (
      const ::CORBA::Any &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void disconnect_push_consumer (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    PushConsumer_tie (const PushConsumer_tie &);
    void operator= (const PushConsumer_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  PushSupplier_tie : public PushSupplier
  {
  public:
    /// the T& ctor
    PushSupplier_tie (T &t);
    /// ctor taking a POA
    PushSupplier_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    PushSupplier_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    PushSupplier_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~PushSupplier_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void disconnect_push_supplier (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    PushSupplier_tie (const PushSupplier_tie &);
    void operator= (const PushSupplier_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  PullConsumer_tie : public PullConsumer
  {
  public:
    /// the T& ctor
    PullConsumer_tie (T &t);
    /// ctor taking a POA
    PullConsumer_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    PullConsumer_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    PullConsumer_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~PullConsumer_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void disconnect_pull_consumer (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    PullConsumer_tie (const PullConsumer_tie &);
    void operator= (const PullConsumer_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  PullSupplier_tie : public PullSupplier
  {
  public:
    /// the T& ctor
    PullSupplier_tie (T &t);
    /// ctor taking a POA
    PullSupplier_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    PullSupplier_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    PullSupplier_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~PullSupplier_tie (void);
    // TIE specific functions
    /// return the underlying object
    T *_tied_object (void);
    /// set the underlying object
    void _tied_object (T &obj);
    /// set the underlying object and the ownership flag
    void _tied_object (T *obj, ::CORBA::Boolean release = true);
    /// do we own it
    ::CORBA::Boolean _is_owner (void);
    /// set the ownership

    void _is_owner ( ::CORBA::Boolean b);
    // overridden ServantBase operations
    PortableServer::POA_ptr _default_POA (void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Any * pull (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Any * try_pull (
      ::CORBA::Boolean_out);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void disconnect_pull_supplier (
      void);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    PullSupplier_tie (const PullSupplier_tie &);
    void operator= (const PullSupplier_tie &);
  };
} // module CosEventComm

// TAO_IDL - Generated from 
// .\be\be_codegen.cpp:1748


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "CosEventCommS_T.cpp"
#endif /* defined REQUIRED SOURCE */

#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("CosEventCommS_T.cpp")
#endif /* defined REQUIRED PRAGMA */

#endif /* ifndef */

