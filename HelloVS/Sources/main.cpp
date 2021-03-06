#include <stdio.h>
#include <stdlib.h>
#include "h_time.h"


#ifdef _linux_
#include<unistd.h>
#endif


int main()
{
	int   cnt = 0;
#ifdef _windows_
	while (++cnt)
	{
		printf("[%d]Hello Windows\n", cnt);
		g_sleep_ms(1000);
	}
#endif

#ifdef _linux_
	pid_t pid, my_pid, my_ppid;
	//当fork调用成功后，子进程开始从fork后开始执行
	pid = fork();

	//pid用于接收当前进程id， ppid用于接收父进程id
	if (-1 == pid) {
		//创建进程失败
		perror("fork failed");
		return -1;
	}

	my_pid = getpid();
	my_ppid = getppid();
	while (++cnt)
	{
		if (pid > 0) {
			//父进程
			printf("[%d]parent : pid = %d , ppid = %d\n", cnt, my_pid, my_ppid);
		}
		else if (pid == 0) {
			//子进程
			printf("[%d]child: pid = %d, ppid = %d\n", cnt, my_pid, my_ppid);
		}
		g_sleep_ms(1000);
	}
#endif
	return 0;
}