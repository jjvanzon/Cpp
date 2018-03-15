// maksmpaDlg.h : header file
//

#if !defined(AFX_MAKSMPADLG_H__74167BC9_55D2_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_MAKSMPADLG_H__74167BC9_55D2_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CMaksmpaDlg dialog

class CMaksmpaDlg : public CDialog
{
// Construction
public:
	CMaksmpaDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMaksmpaDlg)
	enum { IDD = IDD_MAKSMPA_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMaksmpaDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMaksmpaDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAKSMPADLG_H__74167BC9_55D2_11D3_B157_9E40578CD634__INCLUDED_)
