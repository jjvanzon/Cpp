// EQ.h : main header file for the EQ application
//

#if !defined(AFX_EQ_H__0F31B446_2904_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_EQ_H__0F31B446_2904_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CEQApp:
// See EQ.cpp for the implementation of this class
//

class CEQApp : public CWinApp
{
public:
	CEQApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEQApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CEQApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EQ_H__0F31B446_2904_11D3_B157_9E40578CD634__INCLUDED_)
