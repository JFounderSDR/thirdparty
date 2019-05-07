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

#ifndef _TAO_IDL_IFR_EXTENDEDS_T_FC5GFN_H_
#define _TAO_IDL_IFR_EXTENDEDS_T_FC5GFN_H_



TAO_BEGIN_VERSIONED_NAMESPACE_DECL



// TAO_IDL - Generated from 
// c:\ace_wrappers\tao\tao_idl\be\be_visitor_root/root_sth.cpp:70

namespace POA_CORBA
{

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  FixedDef_tie : public FixedDef
  {
  public:
    /// the T& ctor
    FixedDef_tie (T &t);
    /// ctor taking a POA
    FixedDef_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    FixedDef_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    FixedDef_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~FixedDef_tie (void);
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

    ::CORBA::DefinitionKind def_kind (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void destroy (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::TypeCode_ptr type (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::UShort digits (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void digits (
      ::CORBA::UShort);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Short scale (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void scale (
      ::CORBA::Short);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    FixedDef_tie (const FixedDef_tie &);
    void operator= (const FixedDef_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  ValueMemberDef_tie : public ValueMemberDef
  {
  public:
    /// the T& ctor
    ValueMemberDef_tie (T &t);
    /// ctor taking a POA
    ValueMemberDef_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    ValueMemberDef_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    ValueMemberDef_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~ValueMemberDef_tie (void);
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

    ::CORBA::DefinitionKind def_kind (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void destroy (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * id (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void id (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void name (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * version (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void version (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Container_ptr defined_in (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * absolute_name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Repository_ptr containing_repository (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Contained::Description * describe (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void move (
      ::CORBA::Container_ptr,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::TypeCode_ptr type (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::IDLType_ptr type_def (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void type_def (
      ::CORBA::IDLType_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Visibility access (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void access (
      ::CORBA::Visibility);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    ValueMemberDef_tie (const ValueMemberDef_tie &);
    void operator= (const ValueMemberDef_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  ValueDef_tie : public ValueDef
  {
  public:
    /// the T& ctor
    ValueDef_tie (T &t);
    /// ctor taking a POA
    ValueDef_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    ValueDef_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    ValueDef_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~ValueDef_tie (void);
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

    ::CORBA::DefinitionKind def_kind (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void destroy (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Contained_ptr lookup (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ContainedSeq * contents (
      ::CORBA::DefinitionKind,
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ContainedSeq * lookup_name (
      const char *,
      ::CORBA::Long,
      ::CORBA::DefinitionKind,
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Container::DescriptionSeq * describe_contents (
      ::CORBA::DefinitionKind,
      ::CORBA::Boolean,
      ::CORBA::Long);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ModuleDef_ptr create_module (
      const char *,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ConstantDef_ptr create_constant (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      const ::CORBA::Any &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::StructDef_ptr create_struct (
      const char *,
      const char *,
      const char *,
      const ::CORBA::StructMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::UnionDef_ptr create_union (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      const ::CORBA::UnionMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::EnumDef_ptr create_enum (
      const char *,
      const char *,
      const char *,
      const ::CORBA::EnumMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::AliasDef_ptr create_alias (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::InterfaceDef_ptr create_interface (
      const char *,
      const char *,
      const char *,
      const ::CORBA::InterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDef_ptr create_value (
      const char *,
      const char *,
      const char *,
      ::CORBA::Boolean,
      ::CORBA::Boolean,
      ::CORBA::ValueDef_ptr,
      ::CORBA::Boolean,
      const ::CORBA::ValueDefSeq &,
      const ::CORBA::InterfaceDefSeq &,
      const ::CORBA::InitializerSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueBoxDef_ptr create_value_box (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ExceptionDef_ptr create_exception (
      const char *,
      const char *,
      const char *,
      const ::CORBA::StructMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::NativeDef_ptr create_native (
      const char *,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::AbstractInterfaceDef_ptr create_abstract_interface (
      const char *,
      const char *,
      const char *,
      const ::CORBA::AbstractInterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::LocalInterfaceDef_ptr create_local_interface (
      const char *,
      const char *,
      const char *,
      const ::CORBA::InterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ExtValueDef_ptr create_ext_value (
      const char *,
      const char *,
      const char *,
      ::CORBA::Boolean,
      ::CORBA::Boolean,
      ::CORBA::ValueDef_ptr,
      ::CORBA::Boolean,
      const ::CORBA::ValueDefSeq &,
      const ::CORBA::InterfaceDefSeq &,
      const ::CORBA::ExtInitializerSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * id (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void id (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void name (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * version (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void version (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Container_ptr defined_in (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * absolute_name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Repository_ptr containing_repository (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Contained::Description * describe (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void move (
      ::CORBA::Container_ptr,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::TypeCode_ptr type (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::InterfaceDefSeq * supported_interfaces (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void supported_interfaces (
      const ::CORBA::InterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::InitializerSeq * initializers (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void initializers (
      const ::CORBA::InitializerSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDef_ptr base_value (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void base_value (
      ::CORBA::ValueDef_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDefSeq * abstract_base_values (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void abstract_base_values (
      const ::CORBA::ValueDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_abstract (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void is_abstract (
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_custom (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void is_custom (
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_truncatable (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void is_truncatable (
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_a (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDef::FullValueDescription * describe_value (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueMemberDef_ptr create_value_member (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      ::CORBA::Visibility);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::AttributeDef_ptr create_attribute (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      ::CORBA::AttributeMode);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::OperationDef_ptr create_operation (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      ::CORBA::OperationMode,
      const ::CORBA::ParDescriptionSeq &,
      const ::CORBA::ExceptionDefSeq &,
      const ::CORBA::ContextIdSeq &);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    ValueDef_tie (const ValueDef_tie &);
    void operator= (const ValueDef_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  ExtValueDef_tie : public ExtValueDef
  {
  public:
    /// the T& ctor
    ExtValueDef_tie (T &t);
    /// ctor taking a POA
    ExtValueDef_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    ExtValueDef_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    ExtValueDef_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~ExtValueDef_tie (void);
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

    ::CORBA::DefinitionKind def_kind (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void destroy (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Contained_ptr lookup (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ContainedSeq * contents (
      ::CORBA::DefinitionKind,
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ContainedSeq * lookup_name (
      const char *,
      ::CORBA::Long,
      ::CORBA::DefinitionKind,
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Container::DescriptionSeq * describe_contents (
      ::CORBA::DefinitionKind,
      ::CORBA::Boolean,
      ::CORBA::Long);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ModuleDef_ptr create_module (
      const char *,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ConstantDef_ptr create_constant (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      const ::CORBA::Any &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::StructDef_ptr create_struct (
      const char *,
      const char *,
      const char *,
      const ::CORBA::StructMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::UnionDef_ptr create_union (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      const ::CORBA::UnionMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::EnumDef_ptr create_enum (
      const char *,
      const char *,
      const char *,
      const ::CORBA::EnumMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::AliasDef_ptr create_alias (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::InterfaceDef_ptr create_interface (
      const char *,
      const char *,
      const char *,
      const ::CORBA::InterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDef_ptr create_value (
      const char *,
      const char *,
      const char *,
      ::CORBA::Boolean,
      ::CORBA::Boolean,
      ::CORBA::ValueDef_ptr,
      ::CORBA::Boolean,
      const ::CORBA::ValueDefSeq &,
      const ::CORBA::InterfaceDefSeq &,
      const ::CORBA::InitializerSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueBoxDef_ptr create_value_box (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ExceptionDef_ptr create_exception (
      const char *,
      const char *,
      const char *,
      const ::CORBA::StructMemberSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::NativeDef_ptr create_native (
      const char *,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::AbstractInterfaceDef_ptr create_abstract_interface (
      const char *,
      const char *,
      const char *,
      const ::CORBA::AbstractInterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::LocalInterfaceDef_ptr create_local_interface (
      const char *,
      const char *,
      const char *,
      const ::CORBA::InterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ExtValueDef_ptr create_ext_value (
      const char *,
      const char *,
      const char *,
      ::CORBA::Boolean,
      ::CORBA::Boolean,
      ::CORBA::ValueDef_ptr,
      ::CORBA::Boolean,
      const ::CORBA::ValueDefSeq &,
      const ::CORBA::InterfaceDefSeq &,
      const ::CORBA::ExtInitializerSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * id (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void id (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void name (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * version (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void version (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Container_ptr defined_in (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * absolute_name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Repository_ptr containing_repository (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Contained::Description * describe (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void move (
      ::CORBA::Container_ptr,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::TypeCode_ptr type (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::InterfaceDefSeq * supported_interfaces (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void supported_interfaces (
      const ::CORBA::InterfaceDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::InitializerSeq * initializers (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void initializers (
      const ::CORBA::InitializerSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDef_ptr base_value (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void base_value (
      ::CORBA::ValueDef_ptr);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDefSeq * abstract_base_values (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void abstract_base_values (
      const ::CORBA::ValueDefSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_abstract (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void is_abstract (
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_custom (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void is_custom (
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_truncatable (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void is_truncatable (
      ::CORBA::Boolean);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Boolean is_a (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueDef::FullValueDescription * describe_value (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ValueMemberDef_ptr create_value_member (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      ::CORBA::Visibility);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::AttributeDef_ptr create_attribute (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      ::CORBA::AttributeMode);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::OperationDef_ptr create_operation (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      ::CORBA::OperationMode,
      const ::CORBA::ParDescriptionSeq &,
      const ::CORBA::ExceptionDefSeq &,
      const ::CORBA::ContextIdSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ExtInitializerSeq * ext_initializers (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void ext_initializers (
      const ::CORBA::ExtInitializerSeq &);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ExtValueDef::ExtFullValueDescription * describe_ext_value (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::ExtAttributeDef_ptr create_ext_attribute (
      const char *,
      const char *,
      const char *,
      ::CORBA::IDLType_ptr,
      ::CORBA::AttributeMode,
      const ::CORBA::ExceptionDefSeq &,
      const ::CORBA::ExceptionDefSeq &);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    ExtValueDef_tie (const ExtValueDef_tie &);
    void operator= (const ExtValueDef_tie &);
  };

  // TAO_IDL - Generated from
  // c:\ace_wrappers\tao\tao_idl\be\be_visitor_interface/tie_sh.cpp:78

  // TIE class: Refer to CORBA v2.2, Section 20.34.4
  template <class T>
  class  ValueBoxDef_tie : public ValueBoxDef
  {
  public:
    /// the T& ctor
    ValueBoxDef_tie (T &t);
    /// ctor taking a POA
    ValueBoxDef_tie (T &t, PortableServer::POA_ptr poa);
    /// ctor taking pointer and an ownership flag
    ValueBoxDef_tie (T *tp, ::CORBA::Boolean release = true);
    /// ctor with T*, ownership flag and a POA
    ValueBoxDef_tie (
        T *tp,
        PortableServer::POA_ptr poa,
        ::CORBA::Boolean release = true
      );
    /// dtor

    ~ValueBoxDef_tie (void);
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

    ::CORBA::DefinitionKind def_kind (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void destroy (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * id (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void id (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void name (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * version (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void version (
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Container_ptr defined_in (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    char * absolute_name (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Repository_ptr containing_repository (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::Contained::Description * describe (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void move (
      ::CORBA::Container_ptr,
      const char *,
      const char *);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::TypeCode_ptr type (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    ::CORBA::IDLType_ptr original_type_def (
      void);

    // TAO_IDL - Generated from
    // c:\ace_wrappers\tao\tao_idl\be\be_visitor_operation/tie_sh.cpp:57

    void original_type_def (
      ::CORBA::IDLType_ptr);
  
  private:
    T *ptr_;
    PortableServer::POA_var poa_;
    ::CORBA::Boolean rel_;

    // copy and assignment are not allowed
    ValueBoxDef_tie (const ValueBoxDef_tie &);
    void operator= (const ValueBoxDef_tie &);
  };
} // module CORBA

// TAO_IDL - Generated from 
// .\be\be_codegen.cpp:1748


TAO_END_VERSIONED_NAMESPACE_DECL



#if defined (ACE_TEMPLATES_REQUIRE_SOURCE)
#include "IFR_ExtendedS_T.cpp"
#endif /* defined REQUIRED SOURCE */

#if defined (ACE_TEMPLATES_REQUIRE_PRAGMA)
#pragma implementation ("IFR_ExtendedS_T.cpp")
#endif /* defined REQUIRED PRAGMA */

#endif /* ifndef */

