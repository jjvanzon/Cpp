#if !defined(AFX_IMAGE_H__41277B91_5C97_11D3_B157_9E40578CD634__INCLUDED_)
#define AFX_IMAGE_H__41277B91_5C97_11D3_B157_9E40578CD634__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.


// Dispatch interfaces referenced by this interface
class CPicture;

/////////////////////////////////////////////////////////////////////////////
// CImage wrapper class

class CImage : public CWnd
{
protected:
	DECLARE_DYNCREATE(CImage)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x4c599241, 0x6926, 0x101b, { 0x99, 0x92, 0x0, 0x0, 0xb, 0x65, 0xc6, 0xf9 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void SetEnabled(BOOL bNewValue);
	BOOL GetEnabled();
	void SetMousePointer(long nNewValue);
	long GetMousePointer();
	void SetAutoSize(BOOL bNewValue);
	BOOL GetAutoSize();
	void SetBackColor(long nNewValue);
	long GetBackColor();
	void SetBackStyle(long nNewValue);
	long GetBackStyle();
	void SetBorderColor(long nNewValue);
	long GetBorderColor();
	void SetBorderStyle(long nNewValue);
	long GetBorderStyle();
	void SetPicture(LPDISPATCH newValue);
	void SetRefPicture(LPDISPATCH newValue);
	CPicture GetPicture();
	void SetMouseIcon(LPDISPATCH newValue);
	void SetRefMouseIcon(LPDISPATCH newValue);
	CPicture GetMouseIcon();
	void SetPictureSizeMode(long nNewValue);
	long GetPictureSizeMode();
	void SetPictureAlignment(long nNewValue);
	long GetPictureAlignment();
	void SetPictureTiling(BOOL bNewValue);
	BOOL GetPictureTiling();
	void SetSpecialEffect(long nNewValue);
	long GetSpecialEffect();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IMAGE_H__41277B91_5C97_11D3_B157_9E40578CD634__INCLUDED_)
