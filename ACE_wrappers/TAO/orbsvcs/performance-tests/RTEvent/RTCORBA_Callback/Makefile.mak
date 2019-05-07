#----------------------------------------------------------------------------
#       NMAKE Workspace
#
# $Id: NMakeWorkspaceCreator.pm 2035 2011-10-06 15:05:21Z johnnyw $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# bin/mwc.pl -type nmake -value_template platforms=Win64 -make_coexistence -recurse -exclude TAO/CIAO -features qos=1,mfc=1
#
#----------------------------------------------------------------------------

!IF "$(CFG)" == ""
CFG=Win64 Debug
!MESSAGE No configuration specified. Defaulting to Win64 Debug.
!ENDIF

!IF "$(CUSTOM_TARGETS)" == ""
CUSTOM_TARGETS=_EMPTY_TARGET_
!ENDIF

all: RTCORBA_Callback_IDL RTCORBA_Callback_Client RTCORBA_Callback_Server

clean depend generated realclean $(CUSTOM_TARGETS):
	@echo Project: Makefile.RTCORBA_Callback_IDL.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.RTCORBA_Callback_IDL.mak CFG="$(CFG)" $(@)
	@echo Project: Makefile.RTCORBA_Callback_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.RTCORBA_Callback_Client.mak CFG="$(CFG)" $(@)
	@echo Project: Makefile.RTCORBA_Callback_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.RTCORBA_Callback_Server.mak CFG="$(CFG)" $(@)

RTCORBA_Callback_IDL:
	@echo Project: Makefile.RTCORBA_Callback_IDL.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.RTCORBA_Callback_IDL.mak CFG="$(CFG)" all

RTCORBA_Callback_Client: RTCORBA_Callback_IDL
	@echo Project: Makefile.RTCORBA_Callback_Client.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.RTCORBA_Callback_Client.mak CFG="$(CFG)" all

RTCORBA_Callback_Server: RTCORBA_Callback_IDL
	@echo Project: Makefile.RTCORBA_Callback_Server.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.RTCORBA_Callback_Server.mak CFG="$(CFG)" all

project_name_list:
	@echo RTCORBA_Callback_Client
	@echo RTCORBA_Callback_IDL
	@echo RTCORBA_Callback_Server
