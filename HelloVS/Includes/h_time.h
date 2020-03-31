#ifndef __H_TIME__
#define __H_TIME__

#ifdef _windows_
#include <windows.h>
inline static void g_sleep_ms(int ms)
{
	Sleep(ms);
}
#endif

#ifdef _linux_
#include<unistd.h>
inline static void g_sleep_ms(int ms)
{
	usleep(ms*1000);
}
#endif

#endif