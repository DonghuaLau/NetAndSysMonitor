// libcpuinfo.h : libcpuinfo DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// ClibcpuinfoApp
// �йش���ʵ�ֵ���Ϣ������� libcpuinfo.cpp
//

class ClibcpuinfoApp : public CWinApp
{
public:
	ClibcpuinfoApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
