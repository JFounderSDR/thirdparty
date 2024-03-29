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
!MESSAGE NMAKE /f "Makefile.DiffServPolicy.mak" CFG="Win64 Debug"
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
INTDIR=Debug\DiffServPolicy\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_DiffServPolicyd.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_DIFFSERVPOLICY_BUILD_DLL -f "Makefile.DiffServPolicy.dep" "Client_Network_Priority_Policy.cpp" "DiffServ_Network_Priority_Hook.cpp" "DiffServ_Protocols_Hooks.cpp" "DiffServ_Service_Context_Handler.cpp" "DiffServPolicy.cpp" "DiffServPolicy_Factory.cpp" "DiffServPolicy_ORBInitializer.cpp" "Server_Network_Priority_Policy.cpp" "DiffServPolicyC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicyd.pdb"
	-@del /f/q "..\..\..\lib\TAO_DiffServPolicyd.dll"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicyd.lib"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicyd.exp"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicyd.ilk"

"$(INTDIR)" :
	if not exist "Debug\$(NULL)" mkdir "Debug"
	if not exist "Debug\DiffServPolicy\$(NULL)" mkdir "Debug\DiffServPolicy"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /MDd /GR /Gy /wd4355 /wd4250 /wd4290 /Fd"$(INTDIR)/" /I "..\..\.." /I "..\.." /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_DIFFSERVPOLICY_BUILD_DLL /D MPC_LIB_MODIFIER=\"d\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACEd.lib TAOd.lib TAO_AnyTypeCoded.lib TAO_PortableServerd.lib TAO_CodecFactoryd.lib TAO_PId.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll /debug /pdb:"..\..\..\lib\TAO_DiffServPolicyd.pdb" /machine:IA64 /out:"..\..\..\lib\TAO_DiffServPolicyd.dll" /implib:"$(OUTDIR)\TAO_DiffServPolicyd.lib"
LINK32_OBJS= \
	"$(INTDIR)\Client_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServ_Network_Priority_Hook.obj" \
	"$(INTDIR)\DiffServ_Protocols_Hooks.obj" \
	"$(INTDIR)\DiffServ_Service_Context_Handler.obj" \
	"$(INTDIR)\DiffServPolicy.obj" \
	"$(INTDIR)\DiffServPolicy_Factory.obj" \
	"$(INTDIR)\DiffServPolicy_ORBInitializer.obj" \
	"$(INTDIR)\Server_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServPolicyC.obj"

"..\..\..\lib\TAO_DiffServPolicyd.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_DiffServPolicyd.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_DiffServPolicyd.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Release"

OUTDIR=..\..\..\lib
INTDIR=Release\DiffServPolicy\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "..\..\..\lib\TAO_DiffServPolicy.dll"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DTAO_DIFFSERVPOLICY_BUILD_DLL -f "Makefile.DiffServPolicy.dep" "Client_Network_Priority_Policy.cpp" "DiffServ_Network_Priority_Hook.cpp" "DiffServ_Protocols_Hooks.cpp" "DiffServ_Service_Context_Handler.cpp" "DiffServPolicy.cpp" "DiffServPolicy_Factory.cpp" "DiffServPolicy_ORBInitializer.cpp" "Server_Network_Priority_Policy.cpp" "DiffServPolicyC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "..\..\..\lib\TAO_DiffServPolicy.dll"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicy.lib"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicy.exp"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicy.ilk"

"$(INTDIR)" :
	if not exist "Release\$(NULL)" mkdir "Release"
	if not exist "Release\DiffServPolicy\$(NULL)" mkdir "Release\DiffServPolicy"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D TAO_DIFFSERVPOLICY_BUILD_DLL  /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"

RSC=rc.exe

LINK32=link.exe
LINK32_FLAGS=advapi32.lib user32.lib /INCREMENTAL:NO ACE.lib TAO.lib TAO_AnyTypeCode.lib TAO_PortableServer.lib TAO_CodecFactory.lib TAO_PI.lib /libpath:"." /libpath:"..\..\..\lib" /nologo /subsystem:windows /dll  /machine:IA64 /out:"..\..\..\lib\TAO_DiffServPolicy.dll" /implib:"$(OUTDIR)\TAO_DiffServPolicy.lib"
LINK32_OBJS= \
	"$(INTDIR)\Client_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServ_Network_Priority_Hook.obj" \
	"$(INTDIR)\DiffServ_Protocols_Hooks.obj" \
	"$(INTDIR)\DiffServ_Service_Context_Handler.obj" \
	"$(INTDIR)\DiffServPolicy.obj" \
	"$(INTDIR)\DiffServPolicy_Factory.obj" \
	"$(INTDIR)\DiffServPolicy_ORBInitializer.obj" \
	"$(INTDIR)\Server_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServPolicyC.obj"

"..\..\..\lib\TAO_DiffServPolicy.dll" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "..\..\..\lib\TAO_DiffServPolicy.dll.manifest" mt.exe -manifest "..\..\..\lib\TAO_DiffServPolicy.dll.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Debug"

OUTDIR=..\..\..\lib
INTDIR=Static_Debug\DiffServPolicy\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_DiffServPolicysd.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -D_DEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.DiffServPolicy.dep" "Client_Network_Priority_Policy.cpp" "DiffServ_Network_Priority_Hook.cpp" "DiffServ_Protocols_Hooks.cpp" "DiffServ_Service_Context_Handler.cpp" "DiffServPolicy.cpp" "DiffServPolicy_Factory.cpp" "DiffServPolicy_ORBInitializer.cpp" "Server_Network_Priority_Policy.cpp" "DiffServPolicyC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicysd.lib"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicysd.exp"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicysd.ilk"
	-@del /f/q "..\..\..\lib\TAO_DiffServPolicysd.pdb"

"$(INTDIR)" :
	if not exist "Static_Debug\$(NULL)" mkdir "Static_Debug"
	if not exist "Static_Debug\DiffServPolicy\$(NULL)" mkdir "Static_Debug\DiffServPolicy"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /Ob0 /W3 /Gm /EHsc /Zi /GR /Gy /MDd /wd4355 /wd4250 /wd4290 /Fd"..\..\..\lib\TAO_DiffServPolicysd.pdb" /I "..\..\.." /I "..\.." /D _DEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"sd\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_DiffServPolicysd.lib"
LINK32_OBJS= \
	"$(INTDIR)\Client_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServ_Network_Priority_Hook.obj" \
	"$(INTDIR)\DiffServ_Protocols_Hooks.obj" \
	"$(INTDIR)\DiffServ_Service_Context_Handler.obj" \
	"$(INTDIR)\DiffServPolicy.obj" \
	"$(INTDIR)\DiffServPolicy_Factory.obj" \
	"$(INTDIR)\DiffServPolicy_ORBInitializer.obj" \
	"$(INTDIR)\Server_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServPolicyC.obj"

"$(OUTDIR)\TAO_DiffServPolicysd.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_DiffServPolicysd.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_DiffServPolicysd.lib.manifest" -outputresource:$@;2

!ELSEIF  "$(CFG)" == "Win64 Static Release"

OUTDIR=..\..\..\lib
INTDIR=Static_Release\DiffServPolicy\IA64

ALL : "$(INTDIR)" "$(OUTDIR)" DEPENDCHECK $(GENERATED_DIRTY) "$(OUTDIR)\TAO_DiffServPolicys.lib"

DEPEND :
!IF "$(DEPGEN)" == ""
	@echo No suitable dependency generator could be found.
	@echo One comes with MPC, just set the MPC_ROOT environment variable
	@echo to the full path of MPC.  You can download MPC from
	@echo http://www.ociweb.com/products/mpc/down.html
!ELSE
	$(DEPGEN) -I"..\..\.." -I"..\.." -DNDEBUG -DWIN64 -DWIN32 -D_WINDOWS -D_CRT_SECURE_NO_WARNINGS -D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -DACE_AS_STATIC_LIBS -DTAO_AS_STATIC_LIBS -f "Makefile.DiffServPolicy.dep" "Client_Network_Priority_Policy.cpp" "DiffServ_Network_Priority_Hook.cpp" "DiffServ_Protocols_Hooks.cpp" "DiffServ_Service_Context_Handler.cpp" "DiffServPolicy.cpp" "DiffServPolicy_Factory.cpp" "DiffServPolicy_ORBInitializer.cpp" "Server_Network_Priority_Policy.cpp" "DiffServPolicyC.cpp"
!ENDIF

REALCLEAN : CLEAN
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicys.lib"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicys.exp"
	-@del /f/q "$(OUTDIR)\TAO_DiffServPolicys.ilk"

"$(INTDIR)" :
	if not exist "Static_Release\$(NULL)" mkdir "Static_Release"
	if not exist "Static_Release\DiffServPolicy\$(NULL)" mkdir "Static_Release\DiffServPolicy"
	if not exist "$(INTDIR)\$(NULL)" mkdir "$(INTDIR)"

CPP=cl.exe
CPP_COMMON=/Zc:wchar_t /nologo /Wp64 /O2 /W3 /EHsc /MD /GR /wd4355 /wd4250 /wd4290 /I "..\..\.." /I "..\.." /D NDEBUG /D WIN64 /D WIN32 /D _WINDOWS /D _CRT_SECURE_NO_WARNINGS /D _CRT_SECURE_NO_DEPRECATE /D _CRT_NONSTDC_NO_DEPRECATE /D ACE_AS_STATIC_LIBS /D TAO_AS_STATIC_LIBS /D MPC_LIB_MODIFIER=\"s\" /FD /c

CPP_PROJ=$(CPP_COMMON) /Fo"$(INTDIR)\\"


LINK32=link.exe -lib
LINK32_FLAGS=/nologo /machine:IA64 /out:"..\..\..\lib\TAO_DiffServPolicys.lib"
LINK32_OBJS= \
	"$(INTDIR)\Client_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServ_Network_Priority_Hook.obj" \
	"$(INTDIR)\DiffServ_Protocols_Hooks.obj" \
	"$(INTDIR)\DiffServ_Service_Context_Handler.obj" \
	"$(INTDIR)\DiffServPolicy.obj" \
	"$(INTDIR)\DiffServPolicy_Factory.obj" \
	"$(INTDIR)\DiffServPolicy_ORBInitializer.obj" \
	"$(INTDIR)\Server_Network_Priority_Policy.obj" \
	"$(INTDIR)\DiffServPolicyC.obj"

"$(OUTDIR)\TAO_DiffServPolicys.lib" : $(DEF_FILE) $(LINK32_OBJS)
	$(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<
	if exist "$(OUTDIR)\TAO_DiffServPolicys.lib.manifest" mt.exe -manifest "$(OUTDIR)\TAO_DiffServPolicys.lib.manifest" -outputresource:$@;2

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
!IF EXISTS("Makefile.DiffServPolicy.dep")
!INCLUDE "Makefile.DiffServPolicy.dep"
!ENDIF
!ENDIF

!IF "$(CFG)" == "Win64 Debug" || "$(CFG)" == "Win64 Release" || "$(CFG)" == "Win64 Static Debug" || "$(CFG)" == "Win64 Static Release" 
SOURCE="Client_Network_Priority_Policy.cpp"

"$(INTDIR)\Client_Network_Priority_Policy.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\Client_Network_Priority_Policy.obj" $(SOURCE)

SOURCE="DiffServ_Network_Priority_Hook.cpp"

"$(INTDIR)\DiffServ_Network_Priority_Hook.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\DiffServ_Network_Priority_Hook.obj" $(SOURCE)

SOURCE="DiffServ_Protocols_Hooks.cpp"

"$(INTDIR)\DiffServ_Protocols_Hooks.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\DiffServ_Protocols_Hooks.obj" $(SOURCE)

SOURCE="DiffServ_Service_Context_Handler.cpp"

"$(INTDIR)\DiffServ_Service_Context_Handler.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\DiffServ_Service_Context_Handler.obj" $(SOURCE)

SOURCE="DiffServPolicy.cpp"

"$(INTDIR)\DiffServPolicy.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\DiffServPolicy.obj" $(SOURCE)

SOURCE="DiffServPolicy_Factory.cpp"

"$(INTDIR)\DiffServPolicy_Factory.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\DiffServPolicy_Factory.obj" $(SOURCE)

SOURCE="DiffServPolicy_ORBInitializer.cpp"

"$(INTDIR)\DiffServPolicy_ORBInitializer.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\DiffServPolicy_ORBInitializer.obj" $(SOURCE)

SOURCE="Server_Network_Priority_Policy.cpp"

"$(INTDIR)\Server_Network_Priority_Policy.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\Server_Network_Priority_Policy.obj" $(SOURCE)

SOURCE="DiffServPolicyC.cpp"

"$(INTDIR)\DiffServPolicyC.obj" : $(SOURCE)
	$(CPP) $(CPP_COMMON) /Fo"$(INTDIR)\DiffServPolicyC.obj" $(SOURCE)

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
!IF EXISTS("Makefile.DiffServPolicy.dep")
	@echo Using "Makefile.DiffServPolicy.dep"
!ELSE
	@echo Warning: cannot find "Makefile.DiffServPolicy.dep"
!ENDIF
!ENDIF

