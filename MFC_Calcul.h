// MFC_Calcul.h : main header file for the MFC Calcul application
//

#if !defined(AFX_MFCCALCUL_H__22976E25_F2BB_11D0_9937_444553540000__INCLUDED_)
#define AFX_MFCCALCUL_H__22976E25_F2BB_11D0_9937_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// MFCCalculApp:
// See MFC_Calcul.cpp for the implementation of this class
//

class MFCCalculApp : public CWinApp
{
public:
	MFCCalculApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(MFCCalculApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(MFCCalculApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCCALCUL_H__22976E25_F2BB_11D0_9937_444553540000__INCLUDED_)
