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
!MESSAGE NMAKE /f "Makefile.CosEvent.mak" CFG="Win64 Debug"
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
INTDIR=Debug\CosEvent\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_CosEventd.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_HAS_TYPED_EVENT_CHANNEL -DTAO_EVENT_BUILD_DLL -f "Makefile.CosEvent.dep" "CosTypedEventCommC.cpp" "CosTypedEventChannelAdminC.cpp" "CosEventCommC.cpp" "CosEventChannelAdminC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_CosEventd.pdb"
	-@del /f/q "..\..\..\lib\TAO_CosEventd.dll"
	-@del /f/q "$(OUTDIR)\TAO_CosEventd.lib"
	-@del /f/q "$(OUTDIR)\TAO_CosEventd.exp"
	-@del /f/q "$(OUTDIR)\TAO_CosEventd.ilk"

"$(INTDIR)" :
	if not exist "Debug\$(NULL)" mkdir "Debug"
	if not exist "Debug\CosEvent\$(NULL)" mkdir "Debug\CosEvent"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /MDd /GR /Gy /wd4355 /wd4250 /wd4290 /Fd"$(INTDIR)/" /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_HAS_TYPED_EVENT_CHANNEL /D TAO_EVENT_BUILD_DLL /D MPC_LIB_MODIFIER=\"d\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACEd.lib TAOd.lib TAO_AnyTypeCoded.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll /debug /pdb:"..\..\..\lib\TAO_CosEventd.pdb" /machine:IA64 /out:"..\..\..\lib\TAO_CosEventd.dll" /implib:"$(OUTDIR)\TAO_CosEventd.lib"
LINK32_OBJS= \
	"$(INTDIR)\CosEvent.res" \
	"$(INTDIR)\CosTypedEventCommC.obj" \
	"$(INTDIR)\CosTypedEventChannelAdminC.obj" \
	"$(INTDIR)\CosEventCommC.obj" \
	"$(INTDIR)\CosEventChannelAdminC.obj"

"..\..\..\lib\TAO_CosEventd.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_CosEventd.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_CosEventd.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Release"

OUTDIR=..\..\..\lib
INTDIR=Release\CosEvent\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_CosEvent.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_HAS_TYPED_EVENT_CHANNEL -DTAO_EVENT_BUILD_DLL -f "Makefile.CosEvent.dep" "CosTypedEventCommC.cpp" "CosTypedEventChannelAdminC.cpp" "CosEventCommC.cpp" "CosEventChannelAdminC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "..\..\..\lib\TAO_CosEvent.dll"
	-@del /f/q "$(OUTDIR)\TAO_CosEvent.lib"
	-@del /f/q "$(OUTDIR)\TAO_CosEvent.exp"
	-@del /f/q "$(OUTDIR)\TAO_CosEvent.ilk"

"$(INTDIR)" :
	if not exist "Release\$(NULL)" mkdir "Release"
	if not exist "Release\CosEvent\$(NULL)" mkdir "Release\CosEvent"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_HAS_TYPED_EVENT_CHANNEL /D TAO_EVENT_BUILD_DLL  /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACE.lib TAO.lib TAO_AnyTypeCode.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll  /machine:IA64 /out:"..\..\..\lib\TAO_CosEvent.dll" /implib:"$(OUTDIR)\TAO_CosEvent.lib"
LINK32_OBJS= \
	"$(INTDIR)\CosEvent.res" \
	"$(INTDIR)\CosTypedEventCommC.obj" \
	"$(INTDIR)\CosTypedEventChannelAdminC.obj" \
	"$(INTDIR)\CosEventCommC.obj" \
	"$(INTDIR)\CosEventChannelAdminC.obj"

"..\..\..\lib\TAO_CosEvent.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_CosEvent.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_CosEvent.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Debug"

OUTDIR=..\..\..\lib
INTDIR=Static_Debug\CosEvent\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_CosEventsd.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_HAS_TYPED_EVENT_CHANNEL -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.CosEvent.dep" "CosTypedEventCommC.cpp" "CosTypedEventChannelAdminC.cpp" "CosEventCommC.cpp" "CosEventChannelAdminC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_CosEventsd.lib"
	-@del /f/q "$(OUTDIR)\TAO_CosEventsd.exp"
	-@del /f/q "$(OUTDIR)\TAO_CosEventsd.ilk"
	-@del /f/q "..\..\..\lib\TAO_CosEventsd.pdb"

"$(INTDIR)" :
	if not exist "Static_Debug\$(NULL)" mkdir "Static_Debug"
	if not exist "Static_Debug\CosEvent\$(NULL)" mkdir "Static_Debug\CosEvent"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /GR /Gy /MDd /wd4355 /wd4250 /wd4290 /Fd"..\..\..\lib\TAO_CosEventsd.pdb" /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_HAS_TYPED_EVENT_CHANNEL /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"sd\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_CosEventsd.lib"
LINK32_OBJS= \
	"$(INTDIR)\CosTypedEventCommC.obj" \
	"$(INTDIR)\CosTypedEventChannelAdminC.obj" \
	"$(INTDIR)\CosEventCommC.obj" \
	"$(INTDIR)\CosEventChannelAdminC.obj"

"$(OUTDIR)\TAO_CosEventsd.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_CosEventsd.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_CosEventsd.lib.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Release"

OUTDIR=..\..\..\lib
INTDIR=Static_Release\CosEvent\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_CosEvents.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_HAS_TYPED_EVENT_CHANNEL -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.CosEvent.dep" "CosTypedEventCommC.cpp" "CosTypedEventChannelAdminC.cpp" "CosEventCommC.cpp" "CosEventChannelAdminC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_CosEvents.lib"
	-@del /f/q "$(OUTDIR)\TAO_CosEvents.exp"
	-@del /f/q "$(OUTDIR)\TAO_CosEvents.ilk"

"$(INTDIR)" :
	if not exist "Static_Release\$(NULL)" mkdir "Static_Release"
	if not exist "Static_Release\CosEvent\$(NULL)" mkdir "Static_Release\CosEvent"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_HAS_TYPED_EVENT_CHANNEL /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"s\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_CosEvents.lib"
LINK32_OBJS= \
	"$(INTDIR)\CosTypedEventCommC.obj" \
	"$(INTDIR)\CosTypedEventChannelAdminC.obj" \
	"$(INTDIR)\CosEventCommC.obj" \
	"$(INTDIR)\CosEventChannelAdminC.obj"

"$(OUTDIR)\TAO_CosEvents.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_CosEvents.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_CosEvents.lib.manifest" -outputresource:$@;2

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
!IF EXISTS("Makefile.CosEvent.dep")
!INCLUDE "Makefile.CosEvent.dep"
!ENDIF
!ENDIF

!IF "$(CFG)" == "Win64 Debug" || "$(CFG)" == "Win64 Release" || "$(CFG)" == "Win64 Static Debug" || "$(CFG)" == "Win64 Static Release" 
SOURCE="CosTypedEventCommC.cpp"

"$(INTDIR)\CosTypedEventCommC.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\CosTypedEventCommC.obj" $(SOURCE)

SOURCE="CosTypedEventChannelAdminC.cpp"

"$(INTDIR)\CosTypedEventChannelAdminC.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\CosTypedEventChannelAdminC.obj" $(SOURCE)

SOURCE="CosEventCommC.cpp"

"$(INTDIR)\CosEventCommC.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\CosEventCommC.obj" $(SOURCE)

SOURCE="CosEventChannelAdminC.cpp"

"$(INTDIR)\CosEventChannelAdminC.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\CosEventChannelAdminC.obj" $(SOURCE)

!IF  "$(CFG)" == "Win64 Debug"
!ELSEIF  "$(CFG)" == "Win64 Release"
!ELSEIF  "$(CFG)" == "Win64 Static Debug"
!ELSEIF  "$(CFG)" == "Win64 Static Release"
!ENDIF

SOURCE="CosEvent.rc"

"$(INTDIR)\CosEvent.res" : $(SOURCE)
	$(RSC) /l 0x409 /fo"$(INTDIR)\CosEvent.res" /d NDEBUG /d WIN64 /d _CRT_SECURE_NO_WARNINGS /d _CRT_SECURE_NO_DEPRECATE /d _CRT_NONSTDC_NO_DEPRECATE /d TAO_HAS_TYPED_EVENT_CHANNEL /i "..\..\.." /i "..\.." /i "..\..\orbsvcs" $(SOURCE)



!ENDIF

GENERATED : "$(INTDIR)" "$(OUTDIR)" $(GENERATED_DIRTY)
	-@rem

DEPENDCHECK :
!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("Makefile.CosEvent.dep")
	@echo Using "Makefile.CosEvent.dep"
!ELSE
	@echo Warning: cannot find "Makefile.CosEvent.dep"
!ENDIF
!ENDIF

