// MAKSMPBDlg.h : header file
//
//{{AFX_INCLUDES()
#include "image.h"
//}}AFX_INCLUDES

#if !defined(AFX_MAKSMPBDLG_H__41277B89_5C97_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_MAKSMPBDLG_H__41277B89_5C97_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CMAKSMPBDlg dialog

class CMAKSMPBDlg : public CDialog
{
// Construction
public:
	CMAKSMPBDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMAKSMPBDlg)
	enum { IDD = IDD_MAKSMPB_DIALOG };
	CImage	m_image3;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMAKSMPBDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMAKSMPBDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnClickImage3();
	afx_msg void OnDblClickImage3(LPDISPATCH Cancel);
	afx_msg void OnMouseDownImage3(short Button, short Shift, float X, float Y);
	afx_msg void OnMouseMoveImage3(short Button, short Shift, float X, float Y);
	afx_msg void OnMouseUpImage3(short Button, short Shift, float X, float Y);
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAKSMPBDLG_H__41277B89_5C97_11D3_B157_9E40578CD634__INCLUDED_)
