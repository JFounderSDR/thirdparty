# Microsoft Developer Studio Generated NMAKE File
!IF "$(CFG)" == ""
CFG=Win64 Debug
!MESSAGE No configuration specified. Defaulting to Win64 Debug.
!ENDIF

!IF "$(CFG)" == "Win64 Debug" || "$(CFG)" == "Win64 Release" || "$(CFG)" == "Win64 Static Debug" || "$(CFG)" == "Win64 Static Release"
!ELSE
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE
!MESSAGE NMAKE /f "Makefile.RTEventLogAdmin_Skel.mak" CFG="Win64 Debug"
!MESSAGE
!MESSAGE Possible choices for configuration are:
!MESSAGE
!MESSAGE "Win64 Debug" (based on "Win64 (IA64) Dynamic-Link Library")
!MESSAGE "Win64 Release" (based on "Win64 (IA64) Dynamic-Link Library")
!MESSAGE "Win64 Static Debug" (based on "Win64 (IA64) Static Library")
!MESSAGE "Win64 Static Release" (based on "Win64 (IA64) Static Library")
!MESSAGE
!ERROR An invalid configuration was specified.
!ENDIF

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF

!IF "$(DEPGEN)" == ""
!IF EXISTS("$(MPC_ROOT)/depgen.pl")
DEPGEN=perl $(MPC_ROOT)/depgen.pl -i -t nmake
!ELSEIF EXISTS("$(DEPGEN_ROOT)/depgen.pl")
DEPGEN=perl $(DEPGEN_ROOT)/depgen.pl -i -t nmake
!ELSEIF EXISTS("$(ACE_ROOT)/bin/depgen.pl")
DEPGEN=perl $(ACE_ROOT)/bin/depgen.pl -i -t nmake
!ENDIF
!ENDIF

GENERATED_DIRTY =

!IF  "$(CFG)" == "Win64 Debug"

OUTDIR=..\..\..\lib
INTDIR=Debug\RTEventLogAdmin_Skel\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_RTEventLogAdmin_Skeld.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_RTEVENTLOG_SKEL_BUILD_DLL -f "Makefile.RTEventLogAdmin_Skel.dep" "RTEventLogAdminS.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skeld.pdb"
	-@del /f/q "..\..\..\lib\TAO_RTEventLogAdmin_Skeld.dll"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skeld.lib"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skeld.exp"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skeld.ilk"

"$(INTDIR)" :
	if not exist "Debug\$(NULL)" mkdir "Debug"
	if not exist "Debug\RTEventLogAdmin_Skel\$(NULL)" mkdir "Debug\RTEventLogAdmin_Skel"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /MDd /GR /Gy /wd4355 /wd4250 /wd4290 /Fd"$(INTDIR)/" /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_RTEVENTLOG_SKEL_BUILD_DLL /D MPC_LIB_MODIFIER=\"d\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACEd.lib TAOd.lib TAO_AnyTypeCoded.lib TAO_DsLogAdmind.lib TAO_Valuetyped.lib TAO_PortableServerd.lib TAO_CodecFactoryd.lib TAO_PId.lib TAO_Messagingd.lib TAO_Svc_Utilsd.lib TAO_RTEventd.lib TAO_RTEventLogAdmind.lib TAO_DsLogAdmin_Skeld.lib TAO_RTEvent_Skeld.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll /debug /pdb:"..\..\..\lib\TAO_RTEventLogAdmin_Skeld.pdb" /machine:IA64 /out:"..\..\..\lib\TAO_RTEventLogAdmin_Skeld.dll" /implib:"$(OUTDIR)\TAO_RTEventLogAdmin_Skeld.lib"
LINK32_OBJS= \
	"$(INTDIR)\RTEventLogAdminS.obj"

"..\..\..\lib\TAO_RTEventLogAdmin_Skeld.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_RTEventLogAdmin_Skeld.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_RTEventLogAdmin_Skeld.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Release"

OUTDIR=..\..\..\lib
INTDIR=Release\RTEventLogAdmin_Skel\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_RTEventLogAdmin_Skel.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_RTEVENTLOG_SKEL_BUILD_DLL -f "Makefile.RTEventLogAdmin_Skel.dep" "RTEventLogAdminS.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "..\..\..\lib\TAO_RTEventLogAdmin_Skel.dll"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skel.lib"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skel.exp"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skel.ilk"

"$(INTDIR)" :
	if not exist "Release\$(NULL)" mkdir "Release"
	if not exist "Release\RTEventLogAdmin_Skel\$(NULL)" mkdir "Release\RTEventLogAdmin_Skel"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_RTEVENTLOG_SKEL_BUILD_DLL  /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACE.lib TAO.lib TAO_AnyTypeCode.lib TAO_DsLogAdmin.lib TAO_Valuetype.lib TAO_PortableServer.lib TAO_CodecFactory.lib TAO_PI.lib TAO_Messaging.lib TAO_Svc_Utils.lib TAO_RTEvent.lib TAO_RTEventLogAdmin.lib TAO_DsLogAdmin_Skel.lib TAO_RTEvent_Skel.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll  /machine:IA64 /out:"..\..\..\lib\TAO_RTEventLogAdmin_Skel.dll" /implib:"$(OUTDIR)\TAO_RTEventLogAdmin_Skel.lib"
LINK32_OBJS= \
	"$(INTDIR)\RTEventLogAdminS.obj"

"..\..\..\lib\TAO_RTEventLogAdmin_Skel.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_RTEventLogAdmin_Skel.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_RTEventLogAdmin_Skel.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Debug"

OUTDIR=..\..\..\lib
INTDIR=Static_Debug\RTEventLogAdmin_Skel\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_RTEventLogAdmin_Skelsd.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.RTEventLogAdmin_Skel.dep" "RTEventLogAdminS.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skelsd.lib"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skelsd.exp"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skelsd.ilk"
	-@del /f/q "..\..\..\lib\TAO_RTEventLogAdmin_Skelsd.pdb"

"$(INTDIR)" :
	if not exist "Static_Debug\$(NULL)" mkdir "Static_Debug"
	if not exist "Static_Debug\RTEventLogAdmin_Skel\$(NULL)" mkdir "Static_Debug\RTEventLogAdmin_Skel"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /GR /Gy /MDd /wd4355 /wd4250 /wd4290 /Fd"..\..\..\lib\TAO_RTEventLogAdmin_Skelsd.pdb" /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"sd\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_RTEventLogAdmin_Skelsd.lib"
LINK32_OBJS= \
	"$(INTDIR)\RTEventLogAdminS.obj"

"$(OUTDIR)\TAO_RTEventLogAdmin_Skelsd.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_RTEventLogAdmin_Skelsd.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_RTEventLogAdmin_Skelsd.lib.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Release"

OUTDIR=..\..\..\lib
INTDIR=Static_Release\RTEventLogAdmin_Skel\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_RTEventLogAdmin_Skels.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.RTEventLogAdmin_Skel.dep" "RTEventLogAdminS.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skels.lib"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skels.exp"
	-@del /f/q "$(OUTDIR)\TAO_RTEventLogAdmin_Skels.ilk"

"$(INTDIR)" :
	if not exist "Static_Release\$(NULL)" mkdir "Static_Release"
	if not exist "Static_Release\RTEventLogAdmin_Skel\$(NULL)" mkdir "Static_Release\RTEventLogAdmin_Skel"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"s\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_RTEventLogAdmin_Skels.lib"
LINK32_OBJS= \
	"$(INTDIR)\RTEventLogAdminS.obj"

"$(OUTDIR)\TAO_RTEventLogAdmin_Skels.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_RTEventLogAdmin_Skels.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_RTEventLogAdmin_Skels.lib.manifest" -outputresource:$@;2

!ENDIF

CLEAN :
	-@del /f/s/q "$(INTDIR)"

"$(OUTDIR)" :
	if not exist "$(OUTDIR)\$(NULL)" mkdir "$(OUTDIR)"

.c{$(INTDIR)}.obj::
	$(CPP) @<<
   $(CPP_PROJ) $<
<<

.cpp{$(INTDIR)}.obj::
	$(CPP) @<<
   $(CPP_PROJ) $<
<<

.cxx{$(INTDIR)}.obj::
	$(CPP) @<<
   $(CPP_PROJ) $<
<<

.c{$(INTDIR)}.sbr::
	$(CPP) @<<
   $(CPP_PROJ) $<
<<

.cpp{$(INTDIR)}.sbr::
	$(CPP) @<<
   $(CPP_PROJ) $<
<<

.cxx{$(INTDIR)}.sbr::
	$(CPP) @<<
   $(CPP_PROJ) $<
<<

!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("Makefile.RTEventLogAdmin_Skel.dep")
!INCLUDE "Makefile.RTEventLogAdmin_Skel.dep"
!ENDIF
!ENDIF

!IF "$(CFG)" == "Win64 Debug" || "$(CFG)" == "Win64 Release" || "$(CFG)" == "Win64 Static Debug" || "$(CFG)" == "Win64 Static Release" 
SOURCE="RTEventLogAdminS.cpp"

"$(INTDIR)\RTEventLogAdminS.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\RTEventLogAdminS.obj" $(SOURCE)

!IF  "$(CFG)" == "Win64 Debug"
!ELSEIF  "$(CFG)" == "Win64 Release"
!ELSEIF  "$(CFG)" == "Win64 Static Debug"
!ELSEIF  "$(CFG)" == "Win64 Static Release"
!ENDIF


!ENDIF

GENERATED : "$(INTDIR)" "$(OUTDIR)" $(GENERATED_DIRTY)
	-@rem

DEPENDCHECK :
!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("Makefile.RTEventLogAdmin_Skel.dep")
	@echo Using "Makefile.RTEventLogAdmin_Skel.dep"
!ELSE
	@echo Warning: cannot find "Makefile.RTEventLogAdmin_Skel.dep"
!ENDIF
!ENDIF

