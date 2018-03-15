# Microsoft Developer Studio Generated NMAKE File, Based on maksmpa.dsp
!IF "$(CFG)" == ""
CFG=maksmpa - Win32 Debug
!MESSAGE No configuration specified. Defaulting to maksmpa - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "maksmpa - Win32 Release" && "$(CFG)" !=\
 "maksmpa - Win32 Debug"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "maksmpa.mak" CFG="maksmpa - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "maksmpa - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "maksmpa - Win32 Debug" (based on "Win32 (x86) Application")
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

!IF  "$(CFG)" == "maksmpa - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\maksmpa.exe"

!ELSE 

ALL : "$(OUTDIR)\maksmpa.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\maksmpa.obj"
	-@erase "$(INTDIR)\maksmpa.pch"
	-@erase "$(INTDIR)\maksmpa.res"
	-@erase "$(INTDIR)\maksmpaDlg.obj"
	-@erase "$(INTDIR)\Module.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\maksmpa.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\maksmpa.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD\
 /c 
CPP_OBJS=.\Release/
CPP_SBRS=.
MTL_PROJ=/nologo /D "NDEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\maksmpa.res" /d "NDEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\maksmpa.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:no\
 /pdb:"$(OUTDIR)\maksmpa.pdb" /machine:I386 /out:"$(OUTDIR)\maksmpa.exe" 
LINK32_OBJS= \
	"$(INTDIR)\maksmpa.obj" \
	"$(INTDIR)\maksmpa.res" \
	"$(INTDIR)\maksmpaDlg.obj" \
	"$(INTDIR)\Module.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\maksmpa.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "maksmpa - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\maksmpa.exe"

!ELSE 

ALL : "$(OUTDIR)\maksmpa.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\maksmpa.obj"
	-@erase "$(INTDIR)\maksmpa.pch"
	-@erase "$(INTDIR)\maksmpa.res"
	-@erase "$(INTDIR)\maksmpaDlg.obj"
	-@erase "$(INTDIR)\Module.obj"
	-@erase "$(INTDIR)\StdAfx.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\maksmpa.exe"
	-@erase "$(OUTDIR)\maksmpa.ilk"
	-@erase "$(OUTDIR)\maksmpa.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP_PROJ=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\maksmpa.pch" /Yu"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD\
 /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.
MTL_PROJ=/nologo /D "_DEBUG" /mktyplib203 /o NUL /win32 
RSC_PROJ=/l 0x413 /fo"$(INTDIR)\maksmpa.res" /d "_DEBUG" 
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\maksmpa.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=/nologo /subsystem:windows /incremental:yes\
 /pdb:"$(OUTDIR)\maksmpa.pdb" /debug /machine:I386 /out:"$(OUTDIR)\maksmpa.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\maksmpa.obj" \
	"$(INTDIR)\maksmpa.res" \
	"$(INTDIR)\maksmpaDlg.obj" \
	"$(INTDIR)\Module.obj" \
	"$(INTDIR)\StdAfx.obj"

"$(OUTDIR)\maksmpa.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
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


!IF "$(CFG)" == "maksmpa - Win32 Release" || "$(CFG)" ==\
 "maksmpa - Win32 Debug"
SOURCE=.\maksmpa.cpp
DEP_CPP_MAKSM=\
	".\maksmpa.h"\
	".\maksmpaDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\maksmpa.obj" : $(SOURCE) $(DEP_CPP_MAKSM) "$(INTDIR)"\
 "$(INTDIR)\maksmpa.pch"


SOURCE=.\maksmpa.rc
DEP_RSC_MAKSMP=\
	".\res\maksmpa.ico"\
	".\res\maksmpa.rc2"\
	

"$(INTDIR)\maksmpa.res" : $(SOURCE) $(DEP_RSC_MAKSMP) "$(INTDIR)"
	$(RSC) $(RSC_PROJ) $(SOURCE)


SOURCE=.\maksmpaDlg.cpp
DEP_CPP_MAKSMPA=\
	".\maksmpa.h"\
	".\maksmpaDlg.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\maksmpaDlg.obj" : $(SOURCE) $(DEP_CPP_MAKSMPA) "$(INTDIR)"\
 "$(INTDIR)\maksmpa.pch"


SOURCE=.\Module.cpp
DEP_CPP_MODUL=\
	".\maksmpa.h"\
	".\Module.h"\
	".\StdAfx.h"\
	

"$(INTDIR)\Module.obj" : $(SOURCE) $(DEP_CPP_MODUL) "$(INTDIR)"\
 "$(INTDIR)\maksmpa.pch"


SOURCE=.\StdAfx.cpp
DEP_CPP_STDAF=\
	".\StdAfx.h"\
	

!IF  "$(CFG)" == "maksmpa - Win32 Release"

CPP_SWITCHES=/nologo /MT /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS"\
 /Fp"$(INTDIR)\maksmpa.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD\
 /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\maksmpa.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "maksmpa - Win32 Debug"

CPP_SWITCHES=/nologo /MTd /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D\
 "_WINDOWS" /Fp"$(INTDIR)\maksmpa.pch" /Yc"stdafx.h" /Fo"$(INTDIR)\\"\
 /Fd"$(INTDIR)\\" /FD /c 

"$(INTDIR)\StdAfx.obj"	"$(INTDIR)\maksmpa.pch" : $(SOURCE) $(DEP_CPP_STDAF)\
 "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 


!ENDIF 

