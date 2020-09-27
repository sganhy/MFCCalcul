// MFC_CalculDoc.h : interface of the MFCCalculDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCCALCULDOC_H__22976E2B_F2BB_11D0_9937_444553540000__INCLUDED_)
#define AFX_MFCCALCULDOC_H__22976E2B_F2BB_11D0_9937_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CMFCCalculDoc : public CDocument
{
protected: // create from serialization only
	CMFCCalculDoc();
	DECLARE_DYNCREATE(CMFCCalculDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCCalculDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCCalculDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCCalculDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCALCULDOC_H__22976E2B_F2BB_11D0_9937_444553540000__INCLUDED_)
