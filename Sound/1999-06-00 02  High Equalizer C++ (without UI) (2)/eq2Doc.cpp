// eq2Doc.cpp : implementation of the CEq2Doc class
//

#include "stdafx.h"
#include "eq2.h"

#include "eq2Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEq2Doc

IMPLEMENT_DYNCREATE(CEq2Doc, CDocument)

BEGIN_MESSAGE_MAP(CEq2Doc, CDocument)
	//{{AFX_MSG_MAP(CEq2Doc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEq2Doc construction/destruction

CEq2Doc::CEq2Doc()
{
	// TODO: add one-time construction code here

}

CEq2Doc::~CEq2Doc()
{
}

BOOL CEq2Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEq2Doc serialization

void CEq2Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CEq2Doc diagnostics

#ifdef _DEBUG
void CEq2Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEq2Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEq2Doc commands
