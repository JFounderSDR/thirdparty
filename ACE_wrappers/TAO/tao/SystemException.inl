// -*- C++ -*-
//
// $Id: SystemException.inl 14 2007-02-01 15:49:12Z mitza $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

ACE_INLINE CORBA::ULong
CORBA::SystemException::minor (void) const
{
  return this->minor_;
}

ACE_INLINE void
CORBA::SystemException::minor (CORBA::ULong m)
{
  this->minor_ = m;
}

ACE_INLINE CORBA::CompletionStatus
CORBA::SystemException::completed (void) const
{
  return this->completed_;
}

ACE_INLINE void
CORBA::SystemException::completed (CORBA::CompletionStatus c)
{
  this->completed_ = c;
}

ACE_INLINE CORBA::SystemException*
CORBA::SystemException::_downcast (CORBA::Exception* exception)
{
  return dynamic_cast<CORBA::SystemException *> (exception);
}

ACE_INLINE const CORBA::SystemException*
CORBA::SystemException::_downcast (const CORBA::Exception *exception)
{
  return dynamic_cast<const CORBA::SystemException *> (exception);
}


#define TAO_STANDARD_SYSTEM_EXCEPTION_LIST \
    TAO_SYSTEM_EXCEPTION (UNKNOWN) \
    TAO_SYSTEM_EXCEPTION (BAD_PARAM) \
    TAO_SYSTEM_EXCEPTION (NO_MEMORY) \
    TAO_SYSTEM_EXCEPTION (IMP_LIMIT) \
    TAO_SYSTEM_EXCEPTION (COMM_FAILURE) \
    TAO_SYSTEM_EXCEPTION (INV_OBJREF) \
    TAO_SYSTEM_EXCEPTION (OBJECT_NOT_EXIST) \
    TAO_SYSTEM_EXCEPTION (NO_PERMISSION) \
    TAO_SYSTEM_EXCEPTION (INTERNAL) \
    TAO_SYSTEM_EXCEPTION (MARSHAL) \
    TAO_SYSTEM_EXCEPTION (INITIALIZE) \
    TAO_SYSTEM_EXCEPTION (NO_IMPLEMENT) \
    TAO_SYSTEM_EXCEPTION (BAD_TYPECODE) \
    TAO_SYSTEM_EXCEPTION (BAD_OPERATION) \
    TAO_SYSTEM_EXCEPTION (NO_RESOURCES) \
    TAO_SYSTEM_EXCEPTION (NO_RESPONSE) \
    TAO_SYSTEM_EXCEPTION (PERSIST_STORE) \
    TAO_SYSTEM_EXCEPTION (BAD_INV_ORDER) \
    TAO_SYSTEM_EXCEPTION (TRANSIENT) \
    TAO_SYSTEM_EXCEPTION (FREE_MEM) \
    TAO_SYSTEM_EXCEPTION (INV_IDENT) \
    TAO_SYSTEM_EXCEPTION (INV_FLAG) \
    TAO_SYSTEM_EXCEPTION (INTF_REPOS) \
    TAO_SYSTEM_EXCEPTION (BAD_CONTEXT) \
    TAO_SYSTEM_EXCEPTION (OBJ_ADAPTER) \
    TAO_SYSTEM_EXCEPTION (DATA_CONVERSION) \
    TAO_SYSTEM_EXCEPTION (INV_POLICY) \
    TAO_SYSTEM_EXCEPTION (REBIND) \
    TAO_SYSTEM_EXCEPTION (TIMEOUT) \
    TAO_SYSTEM_EXCEPTION (TRANSACTION_UNAVAILABLE) \
    TAO_SYSTEM_EXCEPTION (TRANSACTION_MODE) \
    TAO_SYSTEM_EXCEPTION (TRANSACTION_REQUIRED) \
    TAO_SYSTEM_EXCEPTION (TRANSACTION_ROLLEDBACK) \
    TAO_SYSTEM_EXCEPTION (INVALID_TRANSACTION) \
    TAO_SYSTEM_EXCEPTION (CODESET_INCOMPATIBLE) \
    TAO_SYSTEM_EXCEPTION (BAD_QOS) \
    TAO_SYSTEM_EXCEPTION (INVALID_ACTIVITY) \
    TAO_SYSTEM_EXCEPTION (ACTIVITY_COMPLETED) \
    TAO_SYSTEM_EXCEPTION (ACTIVITY_REQUIRED) \
    TAO_SYSTEM_EXCEPTION (THREAD_CANCELLED)

#define TAO_SYSTEM_EXCEPTION(name) \
ACE_INLINE CORBA::name * \
CORBA::name ::_downcast (CORBA::Exception* exception) \
{ \
  return dynamic_cast<CORBA::name *> (exception); \
}

TAO_STANDARD_SYSTEM_EXCEPTION_LIST
#undef TAO_SYSTEM_EXCEPTION

#define TAO_SYSTEM_EXCEPTION(name) \
ACE_INLINE CORBA::name const * \
CORBA::name ::_downcast (CORBA::Exception const * exception) \
{ \
  return dynamic_cast<CORBA::name const *> (exception); \
}

TAO_STANDARD_SYSTEM_EXCEPTION_LIST
#undef TAO_SYSTEM_EXCEPTION

#define TAO_SYSTEM_EXCEPTION(name) \
ACE_INLINE void \
CORBA::name ::_tao_any_destructor (void * x) \
{ \
  delete static_cast<CORBA::name *> (x); \
}

TAO_STANDARD_SYSTEM_EXCEPTION_LIST
#undef TAO_SYSTEM_EXCEPTION

TAO_END_VERSIONED_NAMESPACE_DECL
