// eq2Doc.h : interface of the CEq2Doc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EQ2DOC_H__1F560291_4471_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_EQ2DOC_H__1F560291_4471_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CEq2Doc : public CDocument
{
protected: // create from serialization only
	CEq2Doc();
	DECLARE_DYNCREATE(CEq2Doc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CEq2Doc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CEq2Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CEq2Doc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_EQ2DOC_H__1F560291_4471_11D3_B157_9E40578CD634__INCLUDED_)
