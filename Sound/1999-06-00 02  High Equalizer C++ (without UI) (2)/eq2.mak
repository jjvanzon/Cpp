# Microsoft Developer Studio Generated NMAKE File, Based on eq2.dsp
!IF "$(CFG)" == ""
CFG=eq2 - Win32 Debug
!MESSAGE No configuration specified. Defaulting to eq2 - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "eq2 - Win32 Release" && "$(CFG)" != "eq2 - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "eq2.mak" CFG="eq2 - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "eq2 - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "eq2 - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "eq2 - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\eq2.exe"

!ELSE 

ALL : "$(OUTDIR)\eq2.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\eq2.obj"
	-@erase "$(INTDIR)\eq2.pch"
	-@erase "$(INTDIR)\eq2.res"
	-@erase "$(INTDIR)\eq2Doc.obj"
	-@erase "$(INTDIR)\eq2View.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\mdTarget.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\eq2.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\eq2.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Release/
CPP_SBRS=.
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\eq2.res" /d "NDEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\eq2.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)\eq2.pdb" /machine:I386 /out:"$(OUTDIR)\eq2.exe" 
LINK32_OBJS= \
	"$(INTDIR)\eq2.obj" \
	"$(INTDIR)\eq2.res" \
	"$(INTDIR)\eq2Doc.obj" \
	"$(INTDIR)\eq2View.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\mdTarget.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\eq2.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "eq2 - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\eq2.exe"

!ELSE 

ALL : "$(OUTDIR)\eq2.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\eq2.obj"
	-@erase "$(INTDIR)\eq2.pch"
	-@erase "$(INTDIR)\eq2.res"
	-@erase "$(INTDIR)\eq2Doc.obj"
	-@erase "$(INTDIR)\eq2View.obj"
	-@erase "$(INTDIR)\MainFrm.obj"
	-@erase "$(INTDIR)\mdTarget.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\eq2.exe"
	-@erase "$(OUTDIR)\eq2.ilk"
	-@erase "$(OUTDIR)\eq2.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\eq2.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\eq2.res" /d "_DEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\eq2.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\eq2.pdb" /debug /machine:I386 /out:"$(OUTDIR)\eq2.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\eq2.obj" \
	"$(INTDIR)\eq2.res" \
	"$(INTDIR)\eq2Doc.obj" \
	"$(INTDIR)\eq2View.obj" \
	"$(INTDIR)\MainFrm.obj" \
	"$(INTDIR)\mdTarget.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\eq2.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<


!IF "$(CFG)" == "eq2 - Win32 Release" || "$(CFG)" == "eq2 - Win32 Debug"
SOURCE=.\eq2.cpp
DEP_CPP_EQ2_C=\
	".\eq2.h"\
	".\eq2Doc.h"\
	".\eq2View.h"\
	".\MainFrm.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\eq2.obj" : $(SOURCE) $(DEP_CPP_EQ2_C) "$(INTDIR)"\
 "$(INTDIR)\eq2.pch"


SOURCE=.\eq2.rc
DEP_RSC_EQ2_R=\
	".\res\eq2.ico"\
	".\res\eq2.rc2"\
	".\res\eq2Doc.ico"\
	

"$(INTDIR)\eq2.res" : $(SOURCE) $(DEP_RSC_EQ2_R) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\eq2Doc.cpp
DEP_CPP_EQ2DO=\
	".\eq2.h"\
	".\eq2Doc.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\eq2Doc.obj" : $(SOURCE) $(DEP_CPP_EQ2DO) "$(INTDIR)"\
 "$(INTDIR)\eq2.pch"


SOURCE=.\eq2View.cpp
DEP_CPP_EQ2VI=\
	".\eq2.h"\
	".\eq2Doc.h"\
	".\eq2View.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\eq2View.obj" : $(SOURCE) $(DEP_CPP_EQ2VI) "$(INTDIR)"\
 "$(INTDIR)\eq2.pch"


SOURCE=.\MainFrm.cpp
DEP_CPP_MAINF=\
	".\eq2.h"\
	".\MainFrm.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MainFrm.obj" : $(SOURCE) $(DEP_CPP_MAINF) "$(INTDIR)"\
 "$(INTDIR)\eq2.pch"


SOURCE=.\mdTarget.cpp
DEP_CPP_MDTAR=\
	".\eq2.h"\
	".\mdTarget.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\mdTarget.obj" : $(SOURCE) $(DEP_CPP_MDTAR) "$(INTDIR)"\
 "$(INTDIR)\eq2.pch"


SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "eq2 - Win32 Release"

CPP_SWITCHES=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\eq2.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\eq2.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "eq2 - Win32 Debug"

CPP_SWITCHES=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /Fp"$(INTDIR)\eq2.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\eq2.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

