#if !defined(AFX_MDTARGET_H__1F56029A_4471_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_MDTARGET_H__1F56029A_4471_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// mdTarget.h : header file
//



/////////////////////////////////////////////////////////////////////////////
// CmdTarget command target

class CmdTarget : public CCmdTarget
{
	DECLARE_DYNCREATE(CmdTarget)

	CmdTarget();           // protected constructor used by dynamic creation

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CmdTarget)
	//}}AFX_VIRTUAL

// Implementation
protected:
	virtual ~CmdTarget();

	// Generated message map functions
	//{{AFX_MSG(CmdTarget)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG

	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MDTARGET_H__1F56029A_4471_11D3_B157_9E40578CD634__INCLUDED_)
