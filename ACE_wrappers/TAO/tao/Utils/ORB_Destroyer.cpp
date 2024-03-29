// $Id: ORB_Destroyer.cpp 1861 2011-08-31 16:18:08Z mesnierp $

#include "tao/Utils/ORB_Destroyer.h"

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

void
TAO::Utils::ORB_Destroyer_Functor::operator() (CORBA::ORB_ptr orb) throw ()
{
  try
    {
      orb->destroy ();
    }
  catch (...)
    {
      // @@ Cannot let exceptions escape, yet we need to log them!
    }
}

TAO_END_VERSIONED_NAMESPACE_DECL
