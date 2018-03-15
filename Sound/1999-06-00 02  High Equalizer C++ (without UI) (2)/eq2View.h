// eq2View.h : interface of the CEq2View class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EQ2VIEW_H__1F560293_4471_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_EQ2VIEW_H__1F560293_4471_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEq2View : public CView
{
protected: // create from serialization only
	CEq2View();
	DECLARE_DYNCREATE(CEq2View)

// Attributes
public:
	CEq2Doc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEq2View)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEq2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEq2View)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in eq2View.cpp
inline CEq2Doc* CEq2View::GetDocument()
   { return (CEq2Doc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EQ2VIEW_H__1F560293_4471_11D3_B157_9E40578CD634__INCLUDED_)
