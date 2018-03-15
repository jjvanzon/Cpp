// maksmpa.h : main header file for the MAKSMPA application
//

#if !defined(AFX_MAKSMPA_H__74167BC7_55D2_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_MAKSMPA_H__74167BC7_55D2_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMaksmpaApp:
// See maksmpa.cpp for the implementation of this class
//

class CMaksmpaApp : public CWinApp
{
public:
	CMaksmpaApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMaksmpaApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMaksmpaApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAKSMPA_H__74167BC7_55D2_11D3_B157_9E40578CD634__INCLUDED_)
