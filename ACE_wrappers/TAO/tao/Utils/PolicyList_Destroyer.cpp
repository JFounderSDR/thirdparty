// $Id: PolicyList_Destroyer.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "tao/Utils/PolicyList_Destroyer.h"

#if !defined (__ACE_INLINE__)
# include "tao/Utils/PolicyList_Destroyer.inl"
#endif /* __ACE_INLINE__ */

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

TAO::Utils::PolicyList_Destroyer::~PolicyList_Destroyer() throw ()
{

  for (CORBA::ULong i = 0; i != length(); ++i)
    {
      CORBA::Policy_ptr policy = (*this)[i];
      if (CORBA::is_nil (policy))
        {
          continue;
        }

      try
        {
          policy->destroy ();
        }
      catch (...)
        {
        }

      (*this)[i] = CORBA::Policy::_nil();
    }
}

TAO_END_VERSIONED_NAMESPACE_DECL
