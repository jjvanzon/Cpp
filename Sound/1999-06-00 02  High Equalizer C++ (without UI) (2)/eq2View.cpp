// eq2View.cpp : implementation of the CEq2View class
//

#include "stdafx.h"
#include "eq2.h"

#include "eq2Doc.h"
#include "eq2View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEq2View

IMPLEMENT_DYNCREATE(CEq2View, CView)

BEGIN_MESSAGE_MAP(CEq2View, CView)
	//{{AFX_MSG_MAP(CEq2View)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEq2View construction/destruction

CEq2View::CEq2View()
{
	// TODO: add construction code here

}

CEq2View::~CEq2View()
{
}

BOOL CEq2View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEq2View drawing

void CEq2View::OnDraw(CDC* pDC)
{
	CEq2Doc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);

	// TODO: add draw code for native data here
}

/////////////////////////////////////////////////////////////////////////////
// CEq2View diagnostics

#ifdef _DEBUG
void CEq2View::AssertValid() const
{
	CView::AssertValid();
}

void CEq2View::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEq2Doc* CEq2View::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEq2Doc)));
	return (CEq2Doc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEq2View message handlers
