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
	//��fork���óɹ����ӽ��̿�ʼ��fork��ʼִ��
	pid = fork();

	//pid���ڽ��յ�ǰ����id�� ppid���ڽ��ո�����id
	if (-1 == pid) {
		//��������ʧ��
		perror("fork failed");
		return -1;
	}

	my_pid = getpid();
	my_ppid = getppid();
	while (++cnt)
	{
		if (pid > 0) {
			//������
			printf("[%d]parent : pid = %d , ppid = %d\n", cnt, my_pid, my_ppid);
		}
		else if (pid == 0) {
			//�ӽ���
			printf("[%d]child: pid = %d, ppid = %d\n", cnt, my_pid, my_ppid);
		}
		g_sleep_ms(1000);
	}
#endif
	return 0;
}