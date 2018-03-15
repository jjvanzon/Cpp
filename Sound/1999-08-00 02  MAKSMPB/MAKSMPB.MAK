# Microsoft Developer Studio Generated NMAKE File, Based on MAKSMPB.DSP
!IF "$(CFG)" == ""
CFG=MAKSMPB - Win32 Debug
!MESSAGE No configuration specified. Defaulting to MAKSMPB - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "MAKSMPB - Win32 Release" && "$(CFG)" !=\
 "MAKSMPB - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "MAKSMPB.MAK" CFG="MAKSMPB - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "MAKSMPB - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "MAKSMPB - Win32 Debug" (based on "Win32 (x86) Application")
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

!IF  "$(CFG)" == "MAKSMPB - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\MAKSMPB.exe"

!ELSE 

ALL : "$(OUTDIR)\MAKSMPB.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\MAKSMPB.obj"
	-@erase "$(INTDIR)\MAKSMPB.pch"
	-@erase "$(INTDIR)\MAKSMPB.res"
	-@erase "$(INTDIR)\MAKSMPBDlg.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\MAKSMPB.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\MAKSMPB.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD\
 /c 
CPP_OBJS=.\Release/
CPP_SBRS=.
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\MAKSMPB.res" /d "NDEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\MAKSMPB.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)\MAKSMPB.pdb" /machine:I386 /out:"$(OUTDIR)\MAKSMPB.exe" 
LINK32_OBJS= \
	"$(INTDIR)\MAKSMPB.obj" \
	"$(INTDIR)\MAKSMPB.res" \
	"$(INTDIR)\MAKSMPBDlg.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\MAKSMPB.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "MAKSMPB - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\MAKSMPB.exe"

!ELSE 

ALL : "$(OUTDIR)\MAKSMPB.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\MAKSMPB.obj"
	-@erase "$(INTDIR)\MAKSMPB.pch"
	-@erase "$(INTDIR)\MAKSMPB.res"
	-@erase "$(INTDIR)\MAKSMPBDlg.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\MAKSMPB.exe"
	-@erase "$(OUTDIR)\MAKSMPB.ilk"
	-@erase "$(OUTDIR)\MAKSMPB.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\MAKSMPB.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD\
 /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\MAKSMPB.res" /d "_DEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\MAKSMPB.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\MAKSMPB.pdb" /debug /machine:I386 /out:"$(OUTDIR)\MAKSMPB.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\MAKSMPB.obj" \
	"$(INTDIR)\MAKSMPB.res" \
	"$(INTDIR)\MAKSMPBDlg.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\MAKSMPB.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
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


!IF "$(CFG)" == "MAKSMPB - Win32 Release" || "$(CFG)" ==\
 "MAKSMPB - Win32 Debug"
SOURCE=.\MAKSMPB.cpp
DEP_CPP_MAKSM=\
	".\image.h"\
	".\MAKSMPB.h"\
	".\MAKSMPBDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MAKSMPB.obj" : $(SOURCE) $(DEP_CPP_MAKSM) "$(INTDIR)"\
 "$(INTDIR)\MAKSMPB.pch"


SOURCE=.\MAKSMPB.rc
DEP_RSC_MAKSMP=\
	".\res\MAKSMPB.ico"\
	".\res\MAKSMPB.rc2"\
	

"$(INTDIR)\MAKSMPB.res" : $(SOURCE) $(DEP_RSC_MAKSMP) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\MAKSMPBDlg.cpp
DEP_CPP_MAKSMPB=\
	".\image.h"\
	".\MAKSMPB.h"\
	".\MAKSMPBDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\MAKSMPBDlg.obj" : $(SOURCE) $(DEP_CPP_MAKSMPB) "$(INTDIR)"\
 "$(INTDIR)\MAKSMPB.pch"


SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "MAKSMPB - Win32 Release"

CPP_SWITCHES=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\MAKSMPB.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD\
 /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\MAKSMPB.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "MAKSMPB - Win32 Debug"

CPP_SWITCHES=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /Fp"$(INTDIR)\MAKSMPB.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\MAKSMPB.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

