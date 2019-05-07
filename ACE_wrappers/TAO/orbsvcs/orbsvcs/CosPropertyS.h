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
// .\be\be_codegen.cpp:460

#ifndef _TAO_IDL_COSPROPERTYS_PY7LAY_H_
#define _TAO_IDL_COSPROPERTYS_PY7LAY_H_


#include "CosPropertyC.h"
#include "tao/BooleanSeqS.h"
#include "tao/CharSeqS.h"
#include "tao/DoubleSeqS.h"
#include "tao/FloatSeqS.h"
#include "tao/LongDoubleSeqS.h"
#include "tao/LongSeqS.h"
#include "tao/OctetSeqS.h"
#include "tao/ShortSeqS.h"
#include "tao/StringSeqS.h"
#include "tao/ULongSeqS.h"
#include "tao/UShortSeqS.h"
#include "tao/WCharSeqS.h"
#include "tao/WStringSeqS.h"
#include "tao/LongLongSeqS.h"
#include "tao/ULongLongSeqS.h"
#include "tao/PolicyS.h"
#include "tao/Policy_ManagerS.h"
#include "tao/Policy_CurrentS.h"
#include "tao/ServicesS.h"
#include "tao/ParameterModeS.h"
#include "tao/orb_typesS.h"
#include "tao/Typecode_typesS.h"
#include "tao/WrongTransactionS.h"
#include "tao/PortableServer/Basic_SArguments.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/Fixed_Size_SArgument_T.h"
#include "tao/PortableServer/Var_Size_SArgument_T.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/Special_Basic_SArguments.h"
#include "tao/PortableServer/UB_String_SArguments.h"
#include "tao/PortableServer/Any_SArg_Traits.h"
#include "tao/PortableServer/Object_SArg_Traits.h"
#include "tao/PortableServer/TypeCode_SArg_Traits.h"
#include "tao/PortableServer/get_arg.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "tao/Collocation_Proxy_Broker.h"
#include "tao/PortableServer/PortableServer.h"
#include "tao/PortableServer/Servant_Base.h"

#include /**/ "orbsvcs/Property/property_skel_export.h"

#if defined (TAO_EXPORT_MACRO)
#undef TAO_EXPORT_MACRO
#endif
#define TAO_EXPORT_MACRO TAO_Property_Skel_Export

TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from
// .\be\be_visitor_arg_traits.cpp:68


TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::CosPropertyService::Property>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::Property,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:898

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyModeType>
    : public
        Basic_SArg_Traits_T<
            ::CosPropertyService::PropertyModeType,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyDef>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyDef,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyMode>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyMode,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyNames>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyNames,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::CosPropertyService::Properties>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::Properties,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyDefs>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyDefs,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyModes>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyModes,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyTypes>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyTypes,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSPROPERTYSERVICE_PROPERTYNAMESITERATOR__SARG_TRAITS_)
#define _COSPROPERTYSERVICE_PROPERTYNAMESITERATOR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosPropertyService::PropertyNamesIterator>
    : public
        Object_SArg_Traits_T<
            ::CosPropertyService::PropertyNamesIterator_ptr,
            ::CosPropertyService::PropertyNamesIterator_var,
            ::CosPropertyService::PropertyNamesIterator_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSPROPERTYSERVICE_PROPERTIESITERATOR__SARG_TRAITS_)
#define _COSPROPERTYSERVICE_PROPERTIESITERATOR__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosPropertyService::PropertiesIterator>
    : public
        Object_SArg_Traits_T<
            ::CosPropertyService::PropertiesIterator_ptr,
            ::CosPropertyService::PropertiesIterator_var,
            ::CosPropertyService::PropertiesIterator_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSPROPERTYSERVICE_PROPERTYSETFACTORY__SARG_TRAITS_)
#define _COSPROPERTYSERVICE_PROPERTYSETFACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosPropertyService::PropertySetFactory>
    : public
        Object_SArg_Traits_T<
            ::CosPropertyService::PropertySetFactory_ptr,
            ::CosPropertyService::PropertySetFactory_var,
            ::CosPropertyService::PropertySetFactory_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSPROPERTYSERVICE_PROPERTYSETDEF__SARG_TRAITS_)
#define _COSPROPERTYSERVICE_PROPERTYSETDEF__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosPropertyService::PropertySetDef>
    : public
        Object_SArg_Traits_T<
            ::CosPropertyService::PropertySetDef_ptr,
            ::CosPropertyService::PropertySetDef_var,
            ::CosPropertyService::PropertySetDef_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSPROPERTYSERVICE_PROPERTYSET__SARG_TRAITS_)
#define _COSPROPERTYSERVICE_PROPERTYSET__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosPropertyService::PropertySet>
    : public
        Object_SArg_Traits_T<
            ::CosPropertyService::PropertySet_ptr,
            ::CosPropertyService::PropertySet_var,
            ::CosPropertyService::PropertySet_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:898

  template<>
  class SArg_Traits< ::CosPropertyService::ExceptionReason>
    : public
        Basic_SArg_Traits_T<
            ::CosPropertyService::ExceptionReason,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:941

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyException>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyException,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:679

  template<>
  class SArg_Traits< ::CosPropertyService::PropertyExceptions>
    : public
        Var_Size_SArg_Traits_T<
            ::CosPropertyService::PropertyExceptions,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

  // TAO_IDL - Generated from
  // .\be\be_visitor_arg_traits.cpp:147

#if !defined (_COSPROPERTYSERVICE_PROPERTYSETDEFFACTORY__SARG_TRAITS_)
#define _COSPROPERTYSERVICE_PROPERTYSETDEFFACTORY__SARG_TRAITS_

  template<>
  class  SArg_Traits< ::CosPropertyService::PropertySetDefFactory>
    : public
        Object_SArg_Traits_T<
            ::CosPropertyService::PropertySetDefFactory_ptr,
            ::CosPropertyService::PropertySetDefFactory_var,
            ::CosPropertyService::PropertySetDefFactory_out,
            TAO::Any_Insert_Policy_Stream
          >
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


TAO_BEGIN_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:41

namespace POA_CosPropertyService
{
  

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PropertySetFactory;
  typedef PropertySetFactory *PropertySetFactory_ptr;

  class TAO_Property_Skel_Export PropertySetFactory
    : public virtual PortableServer::ServantBase
  {
  protected:
    PropertySetFactory (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosPropertyService::PropertySetFactory _stub_type;
    typedef ::CosPropertyService::PropertySetFactory_ptr _stub_ptr_type;
    typedef ::CosPropertyService::PropertySetFactory_var _stub_var_type;

    PropertySetFactory (const PropertySetFactory& rhs);
    virtual ~PropertySetFactory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosPropertyService::PropertySetFactory *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosPropertyService::PropertySet_ptr create_propertyset (
      void) = 0;

    static void create_propertyset_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosPropertyService::PropertySet_ptr create_constrained_propertyset (
      const ::CosPropertyService::PropertyTypes & allowed_property_types,
      const ::CosPropertyService::Properties & allowed_properties) = 0;

    static void create_constrained_propertyset_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosPropertyService::PropertySet_ptr create_initial_propertyset (
      const ::CosPropertyService::Properties & initial_properties) = 0;

    static void create_initial_propertyset_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PropertySetDefFactory;
  typedef PropertySetDefFactory *PropertySetDefFactory_ptr;

  class TAO_Property_Skel_Export PropertySetDefFactory
    : public virtual PortableServer::ServantBase
  {
  protected:
    PropertySetDefFactory (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosPropertyService::PropertySetDefFactory _stub_type;
    typedef ::CosPropertyService::PropertySetDefFactory_ptr _stub_ptr_type;
    typedef ::CosPropertyService::PropertySetDefFactory_var _stub_var_type;

    PropertySetDefFactory (const PropertySetDefFactory& rhs);
    virtual ~PropertySetDefFactory (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosPropertyService::PropertySetDefFactory *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosPropertyService::PropertySetDef_ptr create_propertysetdef (
      void) = 0;

    static void create_propertysetdef_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosPropertyService::PropertySetDef_ptr create_constrained_propertysetdef (
      const ::CosPropertyService::PropertyTypes & allowed_property_types,
      const ::CosPropertyService::PropertyDefs & allowed_property_defs) = 0;

    static void create_constrained_propertysetdef_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosPropertyService::PropertySetDef_ptr create_initial_propertysetdef (
      const ::CosPropertyService::PropertyDefs & initial_property_defs) = 0;

    static void create_initial_propertysetdef_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PropertySet;
  typedef PropertySet *PropertySet_ptr;

  class TAO_Property_Skel_Export PropertySet
    : public virtual PortableServer::ServantBase
  {
  protected:
    PropertySet (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosPropertyService::PropertySet _stub_type;
    typedef ::CosPropertyService::PropertySet_ptr _stub_ptr_type;
    typedef ::CosPropertyService::PropertySet_var _stub_var_type;

    PropertySet (const PropertySet& rhs);
    virtual ~PropertySet (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosPropertyService::PropertySet *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void define_property (
      const char * property_name,
      const ::CORBA::Any & property_value) = 0;

    static void define_property_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void define_properties (
      const ::CosPropertyService::Properties & nproperties) = 0;

    static void define_properties_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::ULong get_number_of_properties (
      void) = 0;

    static void get_number_of_properties_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void get_all_property_names (
      ::CORBA::ULong how_many,
      ::CosPropertyService::PropertyNames_out property_names,
      ::CosPropertyService::PropertyNamesIterator_out rest) = 0;

    static void get_all_property_names_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Any * get_property_value (
      const char * property_name) = 0;

    static void get_property_value_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean get_properties (
      const ::CosPropertyService::PropertyNames & property_names,
      ::CosPropertyService::Properties_out nproperties) = 0;

    static void get_properties_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void get_all_properties (
      ::CORBA::ULong how_many,
      ::CosPropertyService::Properties_out nproperties,
      ::CosPropertyService::PropertiesIterator_out rest) = 0;

    static void get_all_properties_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void delete_property (
      const char * property_name) = 0;

    static void delete_property_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void delete_properties (
      const ::CosPropertyService::PropertyNames & property_names) = 0;

    static void delete_properties_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean delete_all_properties (
      void) = 0;

    static void delete_all_properties_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean is_property_defined (
      const char * property_name) = 0;

    static void is_property_defined_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PropertySetDef;
  typedef PropertySetDef *PropertySetDef_ptr;

  class TAO_Property_Skel_Export PropertySetDef
    : public virtual POA_CosPropertyService::PropertySet
  {
  protected:
    PropertySetDef (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosPropertyService::PropertySetDef _stub_type;
    typedef ::CosPropertyService::PropertySetDef_ptr _stub_ptr_type;
    typedef ::CosPropertyService::PropertySetDef_var _stub_var_type;

    PropertySetDef (const PropertySetDef& rhs);
    virtual ~PropertySetDef (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosPropertyService::PropertySetDef *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void get_allowed_property_types (
      ::CosPropertyService::PropertyTypes_out property_types) = 0;

    static void get_allowed_property_types_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void get_allowed_properties (
      ::CosPropertyService::PropertyDefs_out property_defs) = 0;

    static void get_allowed_properties_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void define_property_with_mode (
      const char * property_name,
      const ::CORBA::Any & property_value,
      ::CosPropertyService::PropertyModeType property_mode) = 0;

    static void define_property_with_mode_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void define_properties_with_modes (
      const ::CosPropertyService::PropertyDefs & property_defs) = 0;

    static void define_properties_with_modes_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CosPropertyService::PropertyModeType get_property_mode (
      const char * property_name) = 0;

    static void get_property_mode_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean get_property_modes (
      const ::CosPropertyService::PropertyNames & property_names,
      ::CosPropertyService::PropertyModes_out property_modes) = 0;

    static void get_property_modes_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void set_property_mode (
      const char * property_name,
      ::CosPropertyService::PropertyModeType property_mode) = 0;

    static void set_property_mode_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void set_property_modes (
      const ::CosPropertyService::PropertyModes & property_modes) = 0;

    static void set_property_modes_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    define_property_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    define_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_number_of_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_all_property_names_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_property_value_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    get_all_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    delete_property_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    delete_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    delete_all_properties_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // .\be\be_interface.cpp:2223

    static void
    is_property_defined_skel (
        TAO_ServerRequest & server_request, 
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PropertyNamesIterator;
  typedef PropertyNamesIterator *PropertyNamesIterator_ptr;

  class TAO_Property_Skel_Export PropertyNamesIterator
    : public virtual PortableServer::ServantBase
  {
  protected:
    PropertyNamesIterator (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosPropertyService::PropertyNamesIterator _stub_type;
    typedef ::CosPropertyService::PropertyNamesIterator_ptr _stub_ptr_type;
    typedef ::CosPropertyService::PropertyNamesIterator_var _stub_var_type;

    PropertyNamesIterator (const PropertyNamesIterator& rhs);
    virtual ~PropertyNamesIterator (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosPropertyService::PropertyNamesIterator *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void reset (
      void) = 0;

    static void reset_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean next_one (
      ::CORBA::String_out property_name) = 0;

    static void next_one_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean next_n (
      ::CORBA::ULong how_many,
      ::CosPropertyService::PropertyNames_out property_names) = 0;

    static void next_n_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void destroy (
      void) = 0;

    static void destroy_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/interface_sh.cpp:78

  class PropertiesIterator;
  typedef PropertiesIterator *PropertiesIterator_ptr;

  class TAO_Property_Skel_Export PropertiesIterator
    : public virtual PortableServer::ServantBase
  {
  protected:
    PropertiesIterator (void);
  
  public:
    /// Useful for template programming.
    typedef ::CosPropertyService::PropertiesIterator _stub_type;
    typedef ::CosPropertyService::PropertiesIterator_ptr _stub_ptr_type;
    typedef ::CosPropertyService::PropertiesIterator_var _stub_var_type;

    PropertiesIterator (const PropertiesIterator& rhs);
    virtual ~PropertiesIterator (void);

    virtual ::CORBA::Boolean _is_a (const char* logical_type_id);

    static void _is_a_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _non_existent_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _interface_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _component_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    static void _repository_id_skel (
        TAO_ServerRequest & req,
        void * servant_upcall,
        void * servant);
    
    virtual void _dispatch (
        TAO_ServerRequest & req,
        void * servant_upcall);
    
    ::CosPropertyService::PropertiesIterator *_this (void);
    
    virtual const char* _interface_repository_id (void) const;

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void reset (
      void) = 0;

    static void reset_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean next_one (
      ::CosPropertyService::Property_out aproperty) = 0;

    static void next_one_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual ::CORBA::Boolean next_n (
      ::CORBA::ULong how_many,
      ::CosPropertyService::Properties_out nproperties) = 0;

    static void next_n_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/operation_sh.cpp:41

    virtual void destroy (
      void) = 0;

    static void destroy_skel (
        TAO_ServerRequest & server_request,
        void * servant_upcall,
        void * servant);
  };

// TAO_IDL - Generated from
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_module/module_sh.cpp:72

} // module CosPropertyService

TAO_END_VERSIONED_NAMESPACE_DECL


#if defined (__ACE_INLINE__)
#include "CosPropertyS.inl"
#endif /* defined INLINE */

#endif /* ifndef */

