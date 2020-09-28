// MFC_CalculView.cpp : implementation of the CMFCalculView class
//

#include "stdafx.h"
#include "MFC_Calcul.h"
#include "locale.h"
#include <iostream>
#include <sstream>
#include "CLogger.h"

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
	Logging::CLogger log ;
	UpdateData(TRUE);
	int op1 = _ttoi(m_op1);
	int op2 = _ttoi(m_op2);
	int result = op1 + op2;

	// TODO: add exception handler 
	CString str;
	CString logMessage ;
	str.Format("%d", result);	
	// log 
	logMessage = m_op1 + " + " + " = " + str;
	log.Log(Logging::LOG_LEVEL_INFO, logMessage, "calcule.log", "CMFCalculView::OnAppSum()",0);
	m_result = str;
	UpdateData(FALSE);
}


void CMFCalculView::OnContextMenu(CWnd* pWnd, CPoint point)
{
	// TODO: Add your message handler code here
	// Load the desired menu
	CMenu mnuPopupSubmit;
	mnuPopupSubmit.LoadMenu(IDR_POPUP_MENU);

	// Get a pointer to the button
	CButton *pButton;
	pButton = reinterpret_cast<CButton *>(GetDlgItem(ID_POPUP_CALCULER));

	// Find the rectangle around the button
	CRect rectSubmitButton;
	pButton->GetWindowRect(&rectSubmitButton);

	// Get a pointer to the first item of the menu
	CMenu *mnuPopupMenu = mnuPopupSubmit.GetSubMenu(0);
	ASSERT(mnuPopupMenu);
	
	// Find out if the user right-clicked the button
	// because we are interested only in the button
	if( rectSubmitButton.PtInRect(point) ) // Since the user right-clicked the button, display the context menu
		mnuPopupMenu->TrackPopupMenu(TPM_LEFTALIGN | TPM_RIGHTBUTTON, point.x, point.y, this);
}
