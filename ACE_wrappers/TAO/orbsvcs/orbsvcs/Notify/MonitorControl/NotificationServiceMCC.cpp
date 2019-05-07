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
// .\be\be_codegen.cpp:375


#include "NotificationServiceMCC.h"
#include "tao/AnyTypeCode/Null_RefCount_Policy.h"
#include "tao/AnyTypeCode/TypeCode_Constants.h"
#include "tao/AnyTypeCode/Alias_TypeCode_Static.h"
#include "tao/AnyTypeCode/Objref_TypeCode_Static.h"
#include "tao/AnyTypeCode/String_TypeCode_Static.h"
#include "tao/AnyTypeCode/Struct_TypeCode_Static.h"
#include "tao/AnyTypeCode/TypeCode_Struct_Field.h"
#include "tao/CDR.h"
#include "tao/Exception_Data.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/SystemException.h"
#include "tao/CDR.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/AnyTypeCode/Any_Impl_T.h"
#include "tao/AnyTypeCode/Any_Dual_Impl_T.h"
#include "ace/OS_NS_string.h"

#if !defined (__ACE_INLINE__)
#include "NotificationServiceMCC.inl"
#endif /* !defined INLINE */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_cs.cpp:53

// Traits specializations for CosNotification::NotificationServiceMonitorControl.

CosNotification::NotificationServiceMonitorControl_ptr
TAO::Objref_Traits<CosNotification::NotificationServiceMonitorControl>::duplicate (
    CosNotification::NotificationServiceMonitorControl_ptr p)
{
  return CosNotification::NotificationServiceMonitorControl::_duplicate (p);
}

void
TAO::Objref_Traits<CosNotification::NotificationServiceMonitorControl>::release (
    CosNotification::NotificationServiceMonitorControl_ptr p)
{
  ::CORBA::release (p);
}

CosNotification::NotificationServiceMonitorControl_ptr
TAO::Objref_Traits<CosNotification::NotificationServiceMonitorControl>::nil (void)
{
  return CosNotification::NotificationServiceMonitorControl::_nil ();
}

::CORBA::Boolean
TAO::Objref_Traits<CosNotification::NotificationServiceMonitorControl>::marshal (
    const CosNotification::NotificationServiceMonitorControl_ptr p,
    TAO_OutputCDR & cdr)
{
  return ::CORBA::Object::marshal (p, cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker * 
(*CosNotification__TAO_NotificationServiceMonitorControl_Proxy_Broker_Factory_function_pointer) (
    ::CORBA::Object_ptr obj) = 0;

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_ctor.cpp:56

CosNotification::NotificationServiceMonitorControl::InvalidName::InvalidName (
    const Monitor::NameList & _tao_names)
  : ::CORBA::UserException (
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        "InvalidName"
      )
{
  this->names = _tao_names;
}



// TAO_IDL - Generated from 
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/exception_cs.cpp:101

CosNotification::NotificationServiceMonitorControl::InvalidName::InvalidName (void)
  : ::CORBA::UserException (
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        "InvalidName"
      )
{
}

CosNotification::NotificationServiceMonitorControl::InvalidName::~InvalidName (void)
{
}

CosNotification::NotificationServiceMonitorControl::InvalidName::InvalidName (const ::CosNotification::NotificationServiceMonitorControl::InvalidName &_tao_excp)
  : ::CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
  this->names = _tao_excp.names;
}

CosNotification::NotificationServiceMonitorControl::InvalidName&
CosNotification::NotificationServiceMonitorControl::InvalidName::operator= (const ::CosNotification::NotificationServiceMonitorControl::InvalidName &_tao_excp)
{
  this->::CORBA::UserException::operator= (_tao_excp);
  this->names = _tao_excp.names;
  return *this;
}

void CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_any_destructor (void *_tao_void_pointer)
{
  InvalidName *_tao_tmp_pointer =
    static_cast<InvalidName *> (_tao_void_pointer);
  delete _tao_tmp_pointer;
}

CosNotification::NotificationServiceMonitorControl::InvalidName *
CosNotification::NotificationServiceMonitorControl::InvalidName::_downcast ( ::CORBA::Exception *_tao_excp)
{
  return dynamic_cast<InvalidName *> (_tao_excp);
}

const CosNotification::NotificationServiceMonitorControl::InvalidName *
CosNotification::NotificationServiceMonitorControl::InvalidName::_downcast ( ::CORBA::Exception const *_tao_excp)
{
  return dynamic_cast<const InvalidName *> (_tao_excp);
}

::CORBA::Exception *CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc (void)
{
  ::CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CosNotification::NotificationServiceMonitorControl::InvalidName, 0);
  return retval;
}

::CORBA::Exception *
CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_duplicate (void) const
{
  ::CORBA::Exception *result = 0;
  ACE_NEW_RETURN (
      result,
      ::CosNotification::NotificationServiceMonitorControl::InvalidName (*this),
      0
    );
  return result;
}

void CosNotification::NotificationServiceMonitorControl::InvalidName::_raise (void) const
{
  throw *this;
}

void CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_encode (TAO_OutputCDR &cdr) const
{
  if (!(cdr << *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

void CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_decode (TAO_InputCDR &cdr)
{
  if (!(cdr >> *this))
    {
      throw ::CORBA::MARSHAL ();
    }
}

// TAO extension - the virtual _type method.
::CORBA::TypeCode_ptr CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_type (void) const
{
  return ::CosNotification::NotificationServiceMonitorControl::_tc_InvalidName;
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/struct_typecode.cpp:86



// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/typecode_defn.cpp:460

static TAO::TypeCode::Struct_Field<
  char const *,
  ::CORBA::TypeCode_ptr const *> const 
    _tao_fields_CosNotification_NotificationServiceMonitorControl_InvalidName[] =
      {
        { "names", &Monitor::_tc_NameList }
      };
  
static TAO::TypeCode::Struct<
  char const *,
  ::CORBA::TypeCode_ptr const *,
  TAO::TypeCode::Struct_Field<
    char const *,
    ::CORBA::TypeCode_ptr const *> const *,
  TAO::Null_RefCount_Policy>
_tao_tc_CosNotification_NotificationServiceMonitorControl_InvalidName (
  ::CORBA::tk_except,
  "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
  "InvalidName",
  _tao_fields_CosNotification_NotificationServiceMonitorControl_InvalidName,
  1);

::CORBA::TypeCode_ptr const CosNotification::NotificationServiceMonitorControl::_tc_InvalidName =
  &_tao_tc_CosNotification_NotificationServiceMonitorControl_InvalidName;

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

::Monitor::NameList *
CosNotification::NotificationServiceMonitorControl::get_statistic_names (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::Monitor::NameList>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "get_statistic_names",
      19,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (0, 0);

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

::Monitor::Data *
CosNotification::NotificationServiceMonitorControl::get_statistic (
  const char * name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::Monitor::Data>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_get_statistic_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "get_statistic",
      13,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_get_statistic_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

::Monitor::DataList *
CosNotification::NotificationServiceMonitorControl::get_statistics (
  const ::Monitor::NameList & names)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::Monitor::DataList>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Monitor::NameList>::in_arg_val _tao_names (names);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_names
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_get_statistics_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "get_statistics",
      14,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_get_statistics_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

::Monitor::DataList *
CosNotification::NotificationServiceMonitorControl::get_and_clear_statistics (
  const ::Monitor::NameList & names)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< ::Monitor::DataList>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Monitor::NameList>::in_arg_val _tao_names (names);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_names
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_get_and_clear_statistics_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "get_and_clear_statistics",
      24,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_get_and_clear_statistics_exceptiondata,
      1
    );

  return _tao_retval.retn ();
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
CosNotification::NotificationServiceMonitorControl::clear_statistics (
  const ::Monitor::NameList & names)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< ::Monitor::NameList>::in_arg_val _tao_names (names);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_names
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_clear_statistics_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "clear_statistics",
      16,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_clear_statistics_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
CosNotification::NotificationServiceMonitorControl::shutdown_event_channel (
  const char * name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_shutdown_event_channel_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "shutdown_event_channel",
      22,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_shutdown_event_channel_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
CosNotification::NotificationServiceMonitorControl::remove_consumer (
  const char * name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_remove_consumer_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "remove_consumer",
      15,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_remove_consumer_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
CosNotification::NotificationServiceMonitorControl::remove_supplier (
  const char * name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_remove_supplier_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "remove_supplier",
      15,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_remove_supplier_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
CosNotification::NotificationServiceMonitorControl::remove_consumeradmin (
  const char * name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_remove_consumeradmin_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "remove_consumeradmin",
      20,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_remove_consumeradmin_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
CosNotification::NotificationServiceMonitorControl::remove_supplieradmin (
  const char * name)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;
  TAO::Arg_Traits< char *>::in_arg_val _tao_name (name);

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval,
      &_tao_name
    };

  static TAO::Exception_Data
  _tao_CosNotification_NotificationServiceMonitorControl_remove_supplieradmin_exceptiondata [] = 
    {
      {
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl/InvalidName:1.0",
        CosNotification::NotificationServiceMonitorControl::InvalidName::_alloc
#if TAO_HAS_INTERCEPTORS == 1
        , CosNotification::NotificationServiceMonitorControl::_tc_InvalidName
#endif /* TAO_HAS_INTERCEPTORS */
      }
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      2,
      "remove_supplieradmin",
      20,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_
    );

  _tao_call.invoke (
      _tao_CosNotification_NotificationServiceMonitorControl_remove_supplieradmin_exceptiondata,
      1
    );
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_cs.cpp:80

void
CosNotification::NotificationServiceMonitorControl::shutdown (
  void)
{
  if (!this->is_evaluated ())
    {
      ::CORBA::Object::tao_object_initialize (this);
    }
  
  if (this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ == 0)
    {
      CosNotification_NotificationServiceMonitorControl_setup_collocation ();
    }
  
  TAO::Arg_Traits< void>::ret_val _tao_retval;

  TAO::Argument *_the_tao_operation_signature [] =
    {
      &_tao_retval
    };

  TAO::Invocation_Adapter _tao_call (
      this,
      _the_tao_operation_signature,
      1,
      "shutdown",
      8,
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_,
      TAO::TAO_ONEWAY_INVOCATION
    );

  _tao_call.invoke (0, 0);
}

CosNotification::NotificationServiceMonitorControl::NotificationServiceMonitorControl (void)
 : the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ (0)
{
  this->CosNotification_NotificationServiceMonitorControl_setup_collocation ();
}

void
CosNotification::NotificationServiceMonitorControl::CosNotification_NotificationServiceMonitorControl_setup_collocation ()
{
  if (::CosNotification__TAO_NotificationServiceMonitorControl_Proxy_Broker_Factory_function_pointer)
    {
      this->the_TAO_NotificationServiceMonitorControl_Proxy_Broker_ =
        ::CosNotification__TAO_NotificationServiceMonitorControl_Proxy_Broker_Factory_function_pointer (this);
    }
}

CosNotification::NotificationServiceMonitorControl::~NotificationServiceMonitorControl (void)
{}

void 
CosNotification::NotificationServiceMonitorControl::_tao_any_destructor (void *_tao_void_pointer)
{
  NotificationServiceMonitorControl *_tao_tmp_pointer =
    static_cast<NotificationServiceMonitorControl *> (_tao_void_pointer);
  ::CORBA::release (_tao_tmp_pointer);
}

CosNotification::NotificationServiceMonitorControl_ptr
CosNotification::NotificationServiceMonitorControl::_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<NotificationServiceMonitorControl>::narrow (
        _tao_objref,
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl:1.0",
        CosNotification__TAO_NotificationServiceMonitorControl_Proxy_Broker_Factory_function_pointer
      );
}

CosNotification::NotificationServiceMonitorControl_ptr
CosNotification::NotificationServiceMonitorControl::_unchecked_narrow (
    ::CORBA::Object_ptr _tao_objref)
{
  return
    TAO::Narrow_Utils<NotificationServiceMonitorControl>::unchecked_narrow (
        _tao_objref,
        "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl:1.0",
        CosNotification__TAO_NotificationServiceMonitorControl_Proxy_Broker_Factory_function_pointer
      );
}

CosNotification::NotificationServiceMonitorControl_ptr
CosNotification::NotificationServiceMonitorControl::_nil (void)
{
  return 0;
}

CosNotification::NotificationServiceMonitorControl_ptr
CosNotification::NotificationServiceMonitorControl::_duplicate (NotificationServiceMonitorControl_ptr obj)
{
  if (! ::CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }
  
  return obj;
}

void
CosNotification::NotificationServiceMonitorControl::_tao_release (NotificationServiceMonitorControl_ptr obj)
{
  ::CORBA::release (obj);
}

::CORBA::Boolean
CosNotification::NotificationServiceMonitorControl::_is_a (const char *value)
{
  if (
      ACE_OS::strcmp (
          value,
          "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl:1.0"
        ) == 0 ||
      ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        ) == 0
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->::CORBA::Object::_is_a (value);
    }
}

const char* CosNotification::NotificationServiceMonitorControl::_interface_repository_id (void) const
{
  return "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl:1.0";
}

::CORBA::Boolean
CosNotification::NotificationServiceMonitorControl::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_typecode/objref_typecode.cpp:70

static TAO::TypeCode::Objref<char const *,
                             TAO::Null_RefCount_Policy>
  _tao_tc_CosNotification_NotificationServiceMonitorControl (
    ::CORBA::tk_objref,
    "IDL:sandia.gov/CosNotification/NotificationServiceMonitorControl:1.0",
    "NotificationServiceMonitorControl");
  

namespace CosNotification
{
  ::CORBA::TypeCode_ptr const _tc_NotificationServiceMonitorControl =
    &_tao_tc_CosNotification_NotificationServiceMonitorControl;
}

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/any_op_cs.cpp:46

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Impl_T<CosNotification::NotificationServiceMonitorControl>::to_object (
      ::CORBA::Object_ptr &_tao_elem
    ) const
  {
    _tao_elem = ::CORBA::Object::_duplicate (this->value_);
    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosNotification
{
  

  /// Copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      NotificationServiceMonitorControl_ptr _tao_elem)
  {
    NotificationServiceMonitorControl_ptr _tao_objptr =
      NotificationServiceMonitorControl::_duplicate (_tao_elem);
    _tao_any <<= &_tao_objptr;
  }

  /// Non-copying insertion.
  void
  operator<<= (
      ::CORBA::Any &_tao_any,
      NotificationServiceMonitorControl_ptr *_tao_elem)
  {
    TAO::Any_Impl_T<NotificationServiceMonitorControl>::insert (
        _tao_any,
        NotificationServiceMonitorControl::_tao_any_destructor,
        _tc_NotificationServiceMonitorControl,
        *_tao_elem);
  }

  ::CORBA::Boolean
  operator>>= (
      const ::CORBA::Any &_tao_any,
      NotificationServiceMonitorControl_ptr &_tao_elem)
  {
    return
      TAO::Any_Impl_T<NotificationServiceMonitorControl>::extract (
          _tao_any,
          NotificationServiceMonitorControl::_tao_any_destructor,
          _tc_NotificationServiceMonitorControl,
          _tao_elem);
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



/// Copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CosNotification::NotificationServiceMonitorControl_ptr _tao_elem)
{
  CosNotification::NotificationServiceMonitorControl_ptr _tao_objptr =
    CosNotification::NotificationServiceMonitorControl::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

/// Non-copying insertion.
void
operator<<= (
    ::CORBA::Any &_tao_any,
    CosNotification::NotificationServiceMonitorControl_ptr *_tao_elem)
{
  TAO::Any_Impl_T<CosNotification::NotificationServiceMonitorControl>::insert (
      _tao_any,
      CosNotification::NotificationServiceMonitorControl::_tao_any_destructor,
      CosNotification::_tc_NotificationServiceMonitorControl,
      *_tao_elem);
}

::CORBA::Boolean
operator>>= (
    const ::CORBA::Any &_tao_any,
    CosNotification::NotificationServiceMonitorControl_ptr &_tao_elem)
{
  return
    TAO::Any_Impl_T<CosNotification::NotificationServiceMonitorControl>::extract (
        _tao_any,
        CosNotification::NotificationServiceMonitorControl::_tao_any_destructor,
        CosNotification::_tc_NotificationServiceMonitorControl,
        _tao_elem);
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from 
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/any_op_cs.cpp:45

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<>
  ::CORBA::Boolean
  Any_Dual_Impl_T<CosNotification::NotificationServiceMonitorControl::InvalidName>::demarshal_value (
      TAO_InputCDR & cdr
    )
  {
    ::CORBA::String_var id;

    if (!(cdr >> id.out ()))
      {
        return false;
      }
    
    try
      {
        this->value_->_tao_decode (cdr);
      }
    catch (const ::CORBA::Exception &)
      {
        return false;
      }

    return true;
  }
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#if defined (ACE_ANY_OPS_USE_NAMESPACE)

namespace CosNotification
{
  

  // Copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      const ::CosNotification::NotificationServiceMonitorControl::InvalidName &_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::CosNotification::NotificationServiceMonitorControl::InvalidName>::insert_copy (
        _tao_any,
        ::CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_any_destructor,
        ::CosNotification::NotificationServiceMonitorControl::_tc_InvalidName,
        _tao_elem
      );
  }

  // Non-copying insertion.
  void operator<<= (
      ::CORBA::Any &_tao_any,
      ::CosNotification::NotificationServiceMonitorControl::InvalidName *_tao_elem
    )
  {
    TAO::Any_Dual_Impl_T< ::CosNotification::NotificationServiceMonitorControl::InvalidName>::insert (
        _tao_any,
        ::CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_any_destructor,
        ::CosNotification::NotificationServiceMonitorControl::_tc_InvalidName,
        _tao_elem
      );
  }

  // Extraction to non-const pointer (deprecated).
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      ::CosNotification::NotificationServiceMonitorControl::InvalidName *&_tao_elem
    )
  {
    return _tao_any >>= const_cast<
        const ::CosNotification::NotificationServiceMonitorControl::InvalidName *&> (
        _tao_elem
      );
  }

  // Extraction to const pointer.
  ::CORBA::Boolean operator>>= (
      const ::CORBA::Any &_tao_any,
      const ::CosNotification::NotificationServiceMonitorControl::InvalidName *&_tao_elem
    )
  {
    return
      TAO::Any_Dual_Impl_T< ::CosNotification::NotificationServiceMonitorControl::InvalidName>::extract (
          _tao_any,
          ::CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_any_destructor,
          ::CosNotification::NotificationServiceMonitorControl::_tc_InvalidName,
          _tao_elem
        );
  }
}

#else


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// Copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    const CosNotification::NotificationServiceMonitorControl::InvalidName &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CosNotification::NotificationServiceMonitorControl::InvalidName>::insert_copy (
      _tao_any,
      CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_any_destructor,
      CosNotification::NotificationServiceMonitorControl::_tc_InvalidName,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    ::CORBA::Any &_tao_any,
    CosNotification::NotificationServiceMonitorControl::InvalidName *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CosNotification::NotificationServiceMonitorControl::InvalidName>::insert (
      _tao_any,
      CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_any_destructor,
      CosNotification::NotificationServiceMonitorControl::_tc_InvalidName,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    CosNotification::NotificationServiceMonitorControl::InvalidName *&_tao_elem
  )
{
  return _tao_any >>= const_cast<
      const CosNotification::NotificationServiceMonitorControl::InvalidName *&> (
      _tao_elem
    );
}

// Extraction to const pointer.
::CORBA::Boolean operator>>= (
    const ::CORBA::Any &_tao_any,
    const CosNotification::NotificationServiceMonitorControl::InvalidName *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CosNotification::NotificationServiceMonitorControl::InvalidName>::extract (
        _tao_any,
        CosNotification::NotificationServiceMonitorControl::InvalidName::_tao_any_destructor,
        CosNotification::NotificationServiceMonitorControl::_tc_InvalidName,
        _tao_elem
      );
}
TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




#endif

// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_exception/cdr_op_cs.cpp:49

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CosNotification::NotificationServiceMonitorControl::InvalidName &_tao_aggregate
  )
{
  // First marshal the repository ID.
  if (strm << _tao_aggregate._rep_id ())
    {
      // Now marshal the members (if any).
      return (
        (strm << _tao_aggregate.names)
       );
    }
  else
    {
      return false;
    }
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CosNotification::NotificationServiceMonitorControl::InvalidName &_tao_aggregate
  )
{
  // Demarshal the members.
  return (
    (strm >> _tao_aggregate.names)
  );
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// e:\sca\ace_diab\ace_wrappers\tao\tao_idl\be\be_visitor_interface/cdr_op_cs.cpp:53


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL

::CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const CosNotification::NotificationServiceMonitorControl_ptr _tao_objref)
{
  ::CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

::CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    CosNotification::NotificationServiceMonitorControl_ptr &_tao_objref)
{
  ::CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }
  
  typedef ::CosNotification::NotificationServiceMonitorControl RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        CosNotification__TAO_NotificationServiceMonitorControl_Proxy_Broker_Factory_function_pointer
      );
    
  return true;
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL





TAO_END_VERSIONED_NAMESPACE_DECL


