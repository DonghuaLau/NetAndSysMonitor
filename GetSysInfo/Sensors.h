 /********************************************************************
	created:	2010/11/10
	created:	10:11:2010   13:16
	filename: 	I:\Ӳ������ɨ��2010.9.15\Ӳ������ɨ��2010.11.5\HardwareScanXML\Sensors.h
	file path:	I:\Ӳ������ɨ��2010.9.15\Ӳ������ɨ��2010.11.5\HardwareScanXML
	file base:	Sensors
	file ext:	h
	author:		zhao
	
	purpose:	��ȡCPU������Ƶ��,��ѹ,����Ƶ��,�����¶ȵȲ���,
*********************************************************************/
#include <afxmt.h>

#define  IA32_THERM_STATUS_MSR   0x019C
#define  IA32_TEMPERATURE_TARGET 0x01A2
#define  IA32_PERF_STATUS        0x0198
#define  MSR_PLATFORM_INFO       0xCE 



BOOL InitCPUSenor(void);
BOOL GetCPUTemp(UINT coreindex,OUT DOUBLE &temperTure);
BOOL GetCPUMuiltipler(UINT &Muiltipler);
BOOL GetCPUMaxMuiltipler(UINT &MaxMuiltipler);
