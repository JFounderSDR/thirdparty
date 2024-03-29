/**
 * @file RTServer_Setup.cpp
 *
 * $Id: RTServer_Setup.cpp 1861 2011-08-31 16:18:08Z mesnierp $
 *
 * @author Carlos O'Ryan <coryan@uci.edu>
 */

#include "RTServer_Setup.h"
#include "RIR_Narrow.h"
#include "tao/RTCORBA/RTCORBA.h"

#include "ace/Log_Msg.h"

#if !defined(__ACE_INLINE__)
#include "RTServer_Setup.inl"
#endif /* __ACE_INLINE__ */

RTServer_Setup::RTServer_Setup (int use_rt_corba,
                                CORBA::ORB_ptr orb,
                                const RT_Class &rt_class,
                                int nthreads)
  : RTClient_Setup (use_rt_corba,
                    orb,
                    rt_class,
                    nthreads)
{

  if (use_rt_corba)
    {
      ACE_auto_ptr_reset (this->rtpoa_setup_,
                          new RTPOA_Setup (orb,
                                           *this->rtcorba_setup ()));

      this->poa_ =
        this->rtpoa_setup_->poa ();
    }
  else
    {
      this->poa_ =
        RIR_Narrow<RTPortableServer::POA>::resolve (orb,
                                                    "RootPOA");
    }
}
