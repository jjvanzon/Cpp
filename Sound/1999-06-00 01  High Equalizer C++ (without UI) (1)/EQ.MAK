# Microsoft Developer Studio Generated NMAKE File, Based on EQ.DSP
!IF "$(CFG)" == ""
CFG=EQ - Win32 Debug
!MESSAGE No configuration specified. Defaulting to EQ - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "EQ - Win32 Release" && "$(CFG)" != "EQ - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "EQ.MAK" CFG="EQ - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "EQ - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "EQ - Win32 Debug" (based on "Win32 (x86) Application")
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

!IF  "$(CFG)" == "EQ - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\EQ.exe"

!ELSE 

ALL : "$(OUTDIR)\EQ.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\EQ.obj"
	-@erase "$(INTDIR)\EQ.pch"
	-@erase "$(INTDIR)\EQ.res"
	-@erase "$(INTDIR)\EQDlg.obj"
	-@erase "$(INTDIR)\Module1.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\EQ.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\EQ.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Release/
CPP_SBRS=.
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\EQ.res" /d "NDEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\EQ.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no /pdb:"$(OUTDIR)\EQ.pdb"\
 /machine:I386 /out:"$(OUTDIR)\EQ.exe" 
LINK32_OBJS= \
	"$(INTDIR)\EQ.obj" \
	"$(INTDIR)\EQ.res" \
	"$(INTDIR)\EQDlg.obj" \
	"$(INTDIR)\Module1.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\EQ.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "EQ - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\EQ.exe" "$(OUTDIR)\EQ.bsc"

!ELSE 

ALL : "$(OUTDIR)\EQ.exe" "$(OUTDIR)\EQ.bsc"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\EQ.obj"
	-@erase "$(INTDIR)\EQ.pch"
	-@erase "$(INTDIR)\EQ.res"
	-@erase "$(INTDIR)\EQ.sbr"
	-@erase "$(INTDIR)\EQDlg.obj"
	-@erase "$(INTDIR)\EQDlg.sbr"
	-@erase "$(INTDIR)\Module1.obj"
	-@erase "$(INTDIR)\Module1.sbr"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\StdAfx.sbr"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\EQ.bsc"
	-@erase "$(OUTDIR)\EQ.exe"
	-@erase "$(OUTDIR)\EQ.ilk"
	-@erase "$(OUTDIR)\EQ.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /FR"$(INTDIR)\\" /Fp"$(INTDIR)\EQ.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.\Debug/
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\EQ.res" /d "_DEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\EQ.bsc" 
BSC32_SBRS= \
	"$(INTDIR)\EQ.sbr" \
	"$(INTDIR)\EQDlg.sbr" \
	"$(INTDIR)\Module1.sbr" \
	"$(INTDIR)\StdAfx.sbr"

"$(OUTDIR)\EQ.bsc" : "$(OUTDIR)" $(BSC32_SBRS)
    $(BSC32) @<<
  $(BSC32_FLAGS) $(BSC32_SBRS)
<<

LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\EQ.pdb" /debug /machine:I386 /out:"$(OUTDIR)\EQ.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\EQ.obj" \
	"$(INTDIR)\EQ.res" \
	"$(INTDIR)\EQDlg.obj" \
	"$(INTDIR)\Module1.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\EQ.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
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


!IF "$(CFG)" == "EQ - Win32 Release" || "$(CFG)" == "EQ - Win32 Debug"
SOURCE=.\EQ.cpp

!IF  "$(CFG)" == "EQ - Win32 Release"

DEP_CPP_EQ_CP=\
	".\EQ.h"\
	".\EQDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\EQ.obj" : $(SOURCE) $(DEP_CPP_EQ_CP) "$(INTDIR)" "$(INTDIR)\EQ.pch"


!ELSEIF  "$(CFG)" == "EQ - Win32 Debug"

DEP_CPP_EQ_CP=\
	".\EQ.h"\
	".\EQDlg.h"\
	

"$(INTDIR)\EQ.obj"	"$(INTDIR)\EQ.sbr" : $(SOURCE) $(DEP_CPP_EQ_CP) "$(INTDIR)"\
 "$(INTDIR)\EQ.pch"


!ENDIF 

SOURCE=.\EQ.rc
DEP_RSC_EQ_RC=\
	".\res\EQ.ico"\
	".\res\EQ.rc2"\
	".\res\icon1.ico"\
	

"$(INTDIR)\EQ.res" : $(SOURCE) $(DEP_RSC_EQ_RC) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\EQDlg.cpp

!IF  "$(CFG)" == "EQ - Win32 Release"

DEP_CPP_EQDLG=\
	".\EQ.h"\
	".\EQDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\EQDlg.obj" : $(SOURCE) $(DEP_CPP_EQDLG) "$(INTDIR)"\
 "$(INTDIR)\EQ.pch"


!ELSEIF  "$(CFG)" == "EQ - Win32 Debug"

DEP_CPP_EQDLG=\
	".\EQ.h"\
	".\EQDlg.h"\
	

"$(INTDIR)\EQDlg.obj"	"$(INTDIR)\EQDlg.sbr" : $(SOURCE) $(DEP_CPP_EQDLG)\
 "$(INTDIR)" "$(INTDIR)\EQ.pch"


!ENDIF 

SOURCE=.\Module1.cpp

!IF  "$(CFG)" == "EQ - Win32 Release"

DEP_CPP_MODUL=\
	".\EQ.h"\
	".\Module1.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\Module1.obj" : $(SOURCE) $(DEP_CPP_MODUL) "$(INTDIR)"\
 "$(INTDIR)\EQ.pch"


!ELSEIF  "$(CFG)" == "EQ - Win32 Debug"

DEP_CPP_MODUL=\
	".\EQ.h"\
	".\Module1.h"\
	

"$(INTDIR)\Module1.obj"	"$(INTDIR)\Module1.sbr" : $(SOURCE) $(DEP_CPP_MODUL)\
 "$(INTDIR)" "$(INTDIR)\EQ.pch"


!ENDIF 

SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "EQ - Win32 Release"

CPP_SWITCHES=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\EQ.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\EQ.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "EQ - Win32 Debug"

CPP_SWITCHES=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /FR"$(INTDIR)\\" /Fp"$(INTDIR)\EQ.pch" /Yc"stdafx.h"\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\StdAfx.sbr"	"$(INTDIR)\EQ.pch" : $(SOURCE)\
 $(DEP_CPP_STDAF) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

