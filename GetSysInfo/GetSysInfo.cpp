// GetSysInfo.cpp : �������̨Ӧ�ó������ڵ㡣
//

//#include "stdafx.h"
#include "sysinfo.h"
#include <stdio.h>
#include <afxmt.h>
#include <winioctl.h>
//#include <Windows.h>


int _tmain(int argc, _TCHAR* argv[])
{
	//printf("����ϵͳ\n");
	//printf("==============================\n");
	//GetOSVersion();
	//
	//printf("\n\n������\n");
	//printf("==============================\n");
	//GetCPUInfo();

	//printf("\n\n�ڴ�\n");
	//printf("==============================\n");
	//GetMemoryInfo();

	printf("\n\n��Դ\n");
	printf("==============================\n");
	PowerMng();

	//printf("\n\nUSB Root Hub\n");
	//printf("==============================\n");
	//GetUSBHub();

	//printf("\n\n����\n");
	//printf("==============================\n");
	//GetNetInfo();
	//
	//printf("\n\n�����˿�\n");
	//printf("==============================\n");
	//GetListeningPorts();

	//printf("\n\nӲ��\n");
	//printf("==============================\n");
	//GetDiskInfo();

	//printf("\n\n������\n");
	//printf("==============================\n");
	//GetSensorsInfo();	

	//printf("\n\n�û���¼��־\n");
	//printf("==============================\n");
	//GetLoginInfo();

	//printf("Press Enter to exit\n");
	//getc(stdin);
	printf("\n");
	system("pause");

	return 0;
}

