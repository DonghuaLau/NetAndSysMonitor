
// MonitorExe.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMonitorExeApp:
// �йش����ʵ�֣������ MonitorExe.cpp
//

class CMonitorExeApp : public CWinApp
{
public:
	CMonitorExeApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMonitorExeApp theApp;