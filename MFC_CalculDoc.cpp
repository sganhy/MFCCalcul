// MFC_CalculDoc.cpp : implementation of the CMFCCalculDoc class
//

#include "stdafx.h"
#include "MFC_Calcul.h"

#include "MFC_CalculDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMFCCalculDoc

IMPLEMENT_DYNCREATE(CMFCCalculDoc, CDocument)

BEGIN_MESSAGE_MAP(CMFCCalculDoc, CDocument)
	//{{AFX_MSG_MAP(CMFCCalculDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMFCCalculDoc construction/destruction

CMFCCalculDoc::CMFCCalculDoc()
{
	// TODO: add one-time construction code here

}

CMFCCalculDoc::~CMFCCalculDoc()
{
}

BOOL CMFCCalculDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMFCCalculDoc serialization

void CMFCCalculDoc::Serialize(CArchive& ar)
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
// CMFCCalculDoc diagnostics

#ifdef _DEBUG
void CMFCCalculDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMFCCalculDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMFCCalculDoc commands
