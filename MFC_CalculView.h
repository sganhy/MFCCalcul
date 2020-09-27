// MFC_CalculView.h : interface of the CMFCalculView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MFCCALCULVIEW_H__22976E2D_F2BB_11D0_9937_444553540000__INCLUDED_)
#define AFX_MFCCALCULVIEW_H__22976E2D_F2BB_11D0_9937_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CMFCalculView : public CFormView
{
protected: // create from serialization only
	CMFCalculView();
	DECLARE_DYNCREATE(CMFCalculView)

public:
	//{{AFX_DATA(CMFCalculView)
	enum { IDD = IDD_MFC_CALCUL_FORM };
	CString	m_op1;
	CString	m_op2;
	CString	m_result;
	//}}AFX_DATA

// Attributes
public:
	CMFCCalculDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCalculView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnInitialUpdate();
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMFCalculView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMFCalculView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedErase();
	afx_msg void OnAppSum();
};

#ifndef _DEBUG  // debug version in MFC_CalculView.cpp
inline CMFCCalculDoc* CMFCalculView::GetDocument()
   { return (CMFCCalculDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCALCULVIEW_H__22976E2D_F2BB_11D0_9937_444553540000__INCLUDED_)
