# -*- makefile -*-
#----------------------------------------------------------------------------
#       GNU ACE Workspace
#
# $Id: GNUACEWorkspaceCreator.pm 1861 2011-08-31 16:18:08Z mesnierp $
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# bin/mwc.pl -type gnuace -recurse -exclude TAO/CIAO,TAO/DAnCE -features ssl=1,rpc=1
#
#----------------------------------------------------------------------------

MAKEFILE = GNUmakefile

ifeq ($(findstring k,$(MAKEFLAGS)),k)
  KEEP_GOING = -
endif

include $(ACE_ROOT)/include/makeinclude/macros.GNU

all: Monitor_Control

REMAINING_TARGETS := $(filter-out all,$(TARGETS_NESTED:.nested=)) $(CUSTOM_TARGETS)

$(REMAINING_TARGETS):
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Monitor_Control $(@)

.PHONY: Monitor_Control
Monitor_Control:
	$(KEEP_GOING)@$(MAKE) -f GNUmakefile.Monitor_Control all

project_name_list:
	@echo Monitor_Control
