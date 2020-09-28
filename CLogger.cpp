#include "StdAfx.h"
#include "CLogger.h"
#include <iostream>
#include <fstream>

using namespace Logging;

CLogger CLoggerFactory::m_SingletonInstance;

/////////////////////////////////////////////////////////////////////////////
// Construction/ Deconstruction
/////////////////////////////////////////////////////////////////////////////

CLogger::CLogger()
{
	m_dwLogStart = ::GetTickCount();
}

CLogger::~CLogger()
{
	for (int i=0; i<m_pTargets.GetSize(); i++)
		delete m_pTargets[i];
	m_pTargets.RemoveAll(); 
}

/////////////////////////////////////////////////////////////////////////////
// Method-Implementation
/////////////////////////////////////////////////////////////////////////////

void CLogger::AddTarget(ILogTarget* pTarget)
{
	m_pTargets.Add(pTarget);
}

void CLogger::Log(LOG_LEVEL lvl, LPCTSTR szMsg, LPCTSTR szFile, LPCTSTR szFunction, int nLine)
{
	/*
	bool shouldLog = false;
	for (int i=0; i<m_pTargets.GetSize(); i++)
	{
		if (m_pTargets[i]->IsEnabled(lvl))
		{
			shouldLog = true;
			break; // for
		}
	}

	if (shouldLog)
	{
	
	*/
		CString msg;
		msg.Format(_T("%06d [%s] :%d - %s"), ::GetTickCount()-m_dwLogStart, szFunction, nLine, szMsg);
	    std::ofstream myfile;
        myfile.open ( ::PathFindFileName(szFile));
		myfile << msg;
		myfile.close();
		/*
		for (int i=0; i<m_pTargets.GetSize(); i++)
			if (m_pTargets[i]->IsEnabled(lvl))
				m_pTargets[i]->Append(msg);
	} */
}