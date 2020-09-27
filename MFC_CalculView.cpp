// MFC_CalculView.cpp : implementation of the CMFCalculView class
//

#include "stdafx.h"
#include "MFC_Calcul.h"
#include "locale.h"
#include <iostream>
#include <sstream>

#include "MFC_CalculDoc.h"
#include "MFC_CalculView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCalculView

IMPLEMENT_DYNCREATE(CMFCalculView, CFormView)

BEGIN_MESSAGE_MAP(CMFCalculView, CFormView)
	ON_BN_CLICKED(IDC_ERASE, &CMFCalculView::OnBnClickedErase)
	//{{AFX_MSG_MAP(CMFCalculView)
//}}AFX_MSG_MAP
	ON_COMMAND(ID_APP_CALC, OnAppSum)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCalculView construction/destruction

CMFCalculView::CMFCalculView()
	: CFormView(CMFCalculView::IDD)
{
	//{{AFX_DATA_INIT(CMFCalculView)
	m_op1 = _T("");
	m_op2 = _T("");
	m_result = _T("");
	//}}AFX_DATA_INIT
	// TODO: add construction code here

}

CMFCalculView::~CMFCalculView()
{
}

void CMFCalculView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMFCalculView)
	DDX_Text(pDX, IDC_OP1, m_op1);
	DDX_Text(pDX, IDC_OP2, m_op2);
	DDX_Text(pDX, IDC_RESULT, m_result);
	//}}AFX_DATA_MAP
}

BOOL CMFCalculView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMFCalculView diagnostics

#ifdef _DEBUG
void CMFCalculView::AssertValid() const
{
	CFormView::AssertValid();
}

void CMFCalculView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCalculView message handlers

void CMFCalculView::OnInitialUpdate() 
{
	CFormView::OnInitialUpdate();
	
	// TODO: Add your specialized code here and/or call the base class
	UpdateData(FALSE);
}



void CMFCalculView::OnBnClickedErase()
{
	m_op1 = _T("");
	m_op2 = _T("");
	m_result = _T("");
	UpdateData(FALSE);
	// TODO: Add your control notification handler code here
}


void CMFCalculView::OnAppSum()
{
	UpdateData(TRUE);
	int op1 = _ttoi(m_op1);
	int op2 = _ttoi(m_op2);
	int result = op1 + op2;

	// TODO: add exception handler 
	CString str;
	str.Format("%d", result);	
	m_result = str;
	UpdateData(FALSE);
}
