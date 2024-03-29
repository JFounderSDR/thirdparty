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
!MESSAGE NMAKE /f "Makefile.ImR_Activator_IDL.mak" CFG="Win64 Debug"
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

GENERATED_DIRTY = "ImR_ActivatorC.inl" "ImR_ActivatorS.inl" "ImR_ActivatorC.h" "ImR_ActivatorS.h" "ImR_ActivatorC.cpp" "ImR_ActivatorS.cpp"

!IF  "$(CFG)" == "Win64 Debug"

OUTDIR=..\..\..\lib
INTDIR=Debug\ImR_Activator_IDL\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_ImR_Activator_IDLd.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACTIVATOR_IDL_BUILD_DLL -f "Makefile.ImR_Activator_IDL.dep" "ImR_ActivatorS.cpp" "ImR_ActivatorC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLd.pdb"
	-@del /f/q "..\..\..\lib\TAO_ImR_Activator_IDLd.dll"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLd.lib"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLd.exp"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLd.ilk"
	-@del /f/q "ImR_ActivatorC.inl"
	-@del /f/q "ImR_ActivatorS.inl"
	-@del /f/q "ImR_ActivatorC.h"
	-@del /f/q "ImR_ActivatorS.h"
	-@del /f/q "ImR_ActivatorC.cpp"
	-@del /f/q "ImR_ActivatorS.cpp"

"$(INTDIR)" :
	if not exist "Debug\$(NULL)" mkdir "Debug"
	if not exist "Debug\ImR_Activator_IDL\$(NULL)" mkdir "Debug\ImR_Activator_IDL"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /MDd /GR /Gy /wd4355 /wd4250 /wd4290 /Fd"$(INTDIR)/" /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACTIVATOR_IDL_BUILD_DLL /D MPC_LIB_MODIFIER=\"d\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACEd.lib TAOd.lib TAO_AnyTypeCoded.lib TAO_PortableServerd.lib TAO_ImR_Clientd.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll /debug /pdb:"..\..\..\lib\TAO_ImR_Activator_IDLd.pdb" /machine:IA64 /out:"..\..\..\lib\TAO_ImR_Activator_IDLd.dll" /implib:"$(OUTDIR)\TAO_ImR_Activator_IDLd.lib"
LINK32_OBJS= \
	"$(INTDIR)\ImR_ActivatorS.obj" \
	"$(INTDIR)\ImR_ActivatorC.obj"

"..\..\..\lib\TAO_ImR_Activator_IDLd.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_ImR_Activator_IDLd.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_ImR_Activator_IDLd.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Release"

OUTDIR=..\..\..\lib
INTDIR=Release\ImR_Activator_IDL\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_ImR_Activator_IDL.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACTIVATOR_IDL_BUILD_DLL -f "Makefile.ImR_Activator_IDL.dep" "ImR_ActivatorS.cpp" "ImR_ActivatorC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "..\..\..\lib\TAO_ImR_Activator_IDL.dll"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDL.lib"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDL.exp"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDL.ilk"
	-@del /f/q "ImR_ActivatorC.inl"
	-@del /f/q "ImR_ActivatorS.inl"
	-@del /f/q "ImR_ActivatorC.h"
	-@del /f/q "ImR_ActivatorS.h"
	-@del /f/q "ImR_ActivatorC.cpp"
	-@del /f/q "ImR_ActivatorS.cpp"

"$(INTDIR)" :
	if not exist "Release\$(NULL)" mkdir "Release"
	if not exist "Release\ImR_Activator_IDL\$(NULL)" mkdir "Release\ImR_Activator_IDL"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACTIVATOR_IDL_BUILD_DLL  /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACE.lib TAO.lib TAO_AnyTypeCode.lib TAO_PortableServer.lib TAO_ImR_Client.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll  /machine:IA64 /out:"..\..\..\lib\TAO_ImR_Activator_IDL.dll" /implib:"$(OUTDIR)\TAO_ImR_Activator_IDL.lib"
LINK32_OBJS= \
	"$(INTDIR)\ImR_ActivatorS.obj" \
	"$(INTDIR)\ImR_ActivatorC.obj"

"..\..\..\lib\TAO_ImR_Activator_IDL.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_ImR_Activator_IDL.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_ImR_Activator_IDL.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Debug"

OUTDIR=..\..\..\lib
INTDIR=Static_Debug\ImR_Activator_IDL\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_ImR_Activator_IDLsd.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.ImR_Activator_IDL.dep" "ImR_ActivatorS.cpp" "ImR_ActivatorC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLsd.lib"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLsd.exp"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLsd.ilk"
	-@del /f/q "..\..\..\lib\TAO_ImR_Activator_IDLsd.pdb"
	-@del /f/q "ImR_ActivatorC.inl"
	-@del /f/q "ImR_ActivatorS.inl"
	-@del /f/q "ImR_ActivatorC.h"
	-@del /f/q "ImR_ActivatorS.h"
	-@del /f/q "ImR_ActivatorC.cpp"
	-@del /f/q "ImR_ActivatorS.cpp"

"$(INTDIR)" :
	if not exist "Static_Debug\$(NULL)" mkdir "Static_Debug"
	if not exist "Static_Debug\ImR_Activator_IDL\$(NULL)" mkdir "Static_Debug\ImR_Activator_IDL"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /GR /Gy /MDd /wd4355 /wd4250 /wd4290 /Fd"..\..\..\lib\TAO_ImR_Activator_IDLsd.pdb" /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"sd\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_ImR_Activator_IDLsd.lib"
LINK32_OBJS= \
	"$(INTDIR)\ImR_ActivatorS.obj" \
	"$(INTDIR)\ImR_ActivatorC.obj"

"$(OUTDIR)\TAO_ImR_Activator_IDLsd.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_ImR_Activator_IDLsd.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_ImR_Activator_IDLsd.lib.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Release"

OUTDIR=..\..\..\lib
INTDIR=Static_Release\ImR_Activator_IDL\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_ImR_Activator_IDLs.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -I"..\..\orbsvcs" -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.ImR_Activator_IDL.dep" "ImR_ActivatorS.cpp" "ImR_ActivatorC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLs.lib"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLs.exp"
	-@del /f/q "$(OUTDIR)\TAO_ImR_Activator_IDLs.ilk"
	-@del /f/q "ImR_ActivatorC.inl"
	-@del /f/q "ImR_ActivatorS.inl"
	-@del /f/q "ImR_ActivatorC.h"
	-@del /f/q "ImR_ActivatorS.h"
	-@del /f/q "ImR_ActivatorC.cpp"
	-@del /f/q "ImR_ActivatorS.cpp"

"$(INTDIR)" :
	if not exist "Static_Release\$(NULL)" mkdir "Static_Release"
	if not exist "Static_Release\ImR_Activator_IDL\$(NULL)" mkdir "Static_Release\ImR_Activator_IDL"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /I "..\..\orbsvcs" /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"s\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_ImR_Activator_IDLs.lib"
LINK32_OBJS= \
	"$(INTDIR)\ImR_ActivatorS.obj" \
	"$(INTDIR)\ImR_ActivatorC.obj"

"$(OUTDIR)\TAO_ImR_Activator_IDLs.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_ImR_Activator_IDLs.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_ImR_Activator_IDLs.lib.manifest" -outputresource:$@;2

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
!IF EXISTS("Makefile.ImR_Activator_IDL.dep")
!INCLUDE "Makefile.ImR_Activator_IDL.dep"
!ENDIF
!ENDIF

!IF "$(CFG)" == "Win64 Debug" || "$(CFG)" == "Win64 Release" || "$(CFG)" == "Win64 Static Debug" || "$(CFG)" == "Win64 Static Release" 
SOURCE="ImR_ActivatorS.cpp"

"$(INTDIR)\ImR_ActivatorS.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\ImR_ActivatorS.obj" $(SOURCE)

SOURCE="ImR_ActivatorC.cpp"

"$(INTDIR)\ImR_ActivatorC.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\ImR_ActivatorC.obj" $(SOURCE)

!IF  "$(CFG)" == "Win64 Debug"
SOURCE="ImR_Activator.idl"

InputPath=ImR_Activator.idl

"ImR_ActivatorC.inl" "ImR_ActivatorS.inl" "ImR_ActivatorC.h" "ImR_ActivatorS.h" "ImR_ActivatorC.cpp" "ImR_ActivatorS.cpp" : $(SOURCE)  "..\..\..\bin\tao_idl.exe" "..\..\..\lib\TAO_IDL_BEd.dll" "..\..\..\lib\TAO_IDL_FEd.dll"
	<<tempfile-Win64-Debug-idl_files-ImR_Activator_idl.bat
	@echo off
	PATH=%PATH%;..\..\..\lib
	..\..\..\bin\tao_idl -Wb,pre_include=ace/pre.h -Wb,post_include=ace/post.h -I..\.. -I..\../orbsvcs -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL -Wb,export_macro=ActivatorIDL_Export -Wb,export_include=activator_idl_export.h "$(InputPath)"
<<

!ELSEIF  "$(CFG)" == "Win64 Release"
SOURCE="ImR_Activator.idl"

InputPath=ImR_Activator.idl

"ImR_ActivatorC.inl" "ImR_ActivatorS.inl" "ImR_ActivatorC.h" "ImR_ActivatorS.h" "ImR_ActivatorC.cpp" "ImR_ActivatorS.cpp" : $(SOURCE)  "..\..\..\bin\tao_idl.exe" "..\..\..\lib\TAO_IDL_BE.dll" "..\..\..\lib\TAO_IDL_FE.dll"
	<<tempfile-Win64-Release-idl_files-ImR_Activator_idl.bat
	@echo off
	PATH=%PATH%;..\..\..\lib
	..\..\..\bin\tao_idl -Wb,pre_include=ace/pre.h -Wb,post_include=ace/post.h -I..\.. -I..\../orbsvcs -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL -Wb,export_macro=ActivatorIDL_Export -Wb,export_include=activator_idl_export.h "$(InputPath)"
<<

!ELSEIF  "$(CFG)" == "Win64 Static Debug"
SOURCE="ImR_Activator.idl"

InputPath=ImR_Activator.idl

"ImR_ActivatorC.inl" "ImR_ActivatorS.inl" "ImR_ActivatorC.h" "ImR_ActivatorS.h" "ImR_ActivatorC.cpp" "ImR_ActivatorS.cpp" : $(SOURCE)  "..\..\..\bin\tao_idl.exe"
	<<tempfile-Win64-Static_Debug-idl_files-ImR_Activator_idl.bat
	@echo off
	PATH=%PATH%;..\..\..\lib
	..\..\..\bin\tao_idl -Wb,pre_include=ace/pre.h -Wb,post_include=ace/post.h -I..\.. -I..\../orbsvcs -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL -Wb,export_macro=ActivatorIDL_Export -Wb,export_include=activator_idl_export.h "$(InputPath)"
<<

!ELSEIF  "$(CFG)" == "Win64 Static Release"
SOURCE="ImR_Activator.idl"

InputPath=ImR_Activator.idl

"ImR_ActivatorC.inl" "ImR_ActivatorS.inl" "ImR_ActivatorC.h" "ImR_ActivatorS.h" "ImR_ActivatorC.cpp" "ImR_ActivatorS.cpp" : $(SOURCE)  "..\..\..\bin\tao_idl.exe"
	<<tempfile-Win64-Static_Release-idl_files-ImR_Activator_idl.bat
	@echo off
	PATH=%PATH%;..\..\..\lib
	..\..\..\bin\tao_idl -Wb,pre_include=ace/pre.h -Wb,post_include=ace/post.h -I..\.. -I..\../orbsvcs -Wb,versioning_begin=TAO_BEGIN_VERSIONED_NAMESPACE_DECL -Wb,versioning_end=TAO_END_VERSIONED_NAMESPACE_DECL -Wb,export_macro=ActivatorIDL_Export -Wb,export_include=activator_idl_export.h "$(InputPath)"
<<

!ENDIF


!ENDIF

GENERATED : "$(INTDIR)" "$(OUTDIR)" $(GENERATED_DIRTY)
	-@rem

DEPENDCHECK :
!IF "$(NO_EXTERNAL_DEPS)" != "1"
!IF EXISTS("Makefile.ImR_Activator_IDL.dep")
	@echo Using "Makefile.ImR_Activator_IDL.dep"
!ELSE
	@echo Warning: cannot find "Makefile.ImR_Activator_IDL.dep"
!ENDIF
!ENDIF

