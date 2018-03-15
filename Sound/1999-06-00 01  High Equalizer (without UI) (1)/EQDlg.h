// EQDlg.h : header file
//

#if !defined(AFX_EQDLG_H__0F31B448_2904_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_EQDLG_H__0F31B448_2904_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

/////////////////////////////////////////////////////////////////////////////
// CEQDlg dialog

class CEQDlg : public CDialog
{
// Construction
public:
	CEQDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CEQDlg)
	enum { IDD = IDD_EQ_DIALOG };
	CSliderCtrl	m_slider8;
	CSliderCtrl	m_slider7;
	CSliderCtrl	m_slider6;
	CSliderCtrl	m_slider5;
	CSliderCtrl	m_slider4;
	CSliderCtrl	m_slider3;
	CSliderCtrl	m_slider2;
	CSliderCtrl	m_slider1;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEQDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CEQDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton2();
	afx_msg void OnFileOpenwave();
	afx_msg void OnFileSavewave();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EQDLG_H__0F31B448_2904_11D3_B157_9E40578CD634__INCLUDED_)
