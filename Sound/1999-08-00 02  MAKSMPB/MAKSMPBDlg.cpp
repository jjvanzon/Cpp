// MAKSMPBDlg.cpp : implementation file
//

#include "stdafx.h"
#include "MAKSMPB.h"
#include "MAKSMPBDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMAKSMPBDlg dialog

CMAKSMPBDlg::CMAKSMPBDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CMAKSMPBDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CMAKSMPBDlg)
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CMAKSMPBDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMAKSMPBDlg)
	DDX_Control(pDX, IDC_IMAGE3, m_image3);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CMAKSMPBDlg, CDialog)
	//{{AFX_MSG_MAP(CMAKSMPBDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMAKSMPBDlg message handlers

BOOL CMAKSMPBDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CMAKSMPBDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CMAKSMPBDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

BEGIN_EVENTSINK_MAP(CMAKSMPBDlg, CDialog)
    //{{AFX_EVENTSINK_MAP(CMAKSMPBDlg)
	ON_EVENT(CMAKSMPBDlg, IDC_IMAGE3, -600 /* Click */, OnClickImage3, VTS_NONE)
	ON_EVENT(CMAKSMPBDlg, IDC_IMAGE3, -601 /* DblClick */, OnDblClickImage3, VTS_DISPATCH)
	ON_EVENT(CMAKSMPBDlg, IDC_IMAGE3, -605 /* MouseDown */, OnMouseDownImage3, VTS_I2 VTS_I2 VTS_R4 VTS_R4)
	ON_EVENT(CMAKSMPBDlg, IDC_IMAGE3, -606 /* MouseMove */, OnMouseMoveImage3, VTS_I2 VTS_I2 VTS_R4 VTS_R4)
	ON_EVENT(CMAKSMPBDlg, IDC_IMAGE3, -607 /* MouseUp */, OnMouseUpImage3, VTS_I2 VTS_I2 VTS_R4 VTS_R4)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

void CMAKSMPBDlg::OnClickImage3() 
{
	// TODO: Add your control notification handler code here
	
}

void CMAKSMPBDlg::OnDblClickImage3(LPDISPATCH Cancel) 
{
	// TODO: Add your control notification handler code here
	
}

void CMAKSMPBDlg::OnMouseDownImage3(short Button, short Shift, float X, float Y) 
{
	// TODO: Add your control notification handler code here
	
}

void CMAKSMPBDlg::OnMouseMoveImage3(short Button, short Shift, float X, float Y) 
{
	// TODO: Add your control notification handler code here
	
}

void CMAKSMPBDlg::OnMouseUpImage3(short Button, short Shift, float X, float Y) 
{
	// TODO: Add your control notification handler code here
	
}
