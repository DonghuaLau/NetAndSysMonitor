// MonitorDLL.h : MonitorDLL DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CMonitorDLLApp
// �йش���ʵ�ֵ���Ϣ������� MonitorDLL.cpp
//

class CMonitorDLLApp : public CWinApp
{
public:
	CMonitorDLLApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
