#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int   cnt = 0;
	pid_t pid, my_pid, my_ppid;
	//��fork���óɹ����ӽ��̿�ʼ��fork��ʼִ��
	pid = fork();

	//pid���ڽ��յ�ǰ����id�� ppid���ڽ��ո�����id
	if (-1 == pid) {
		//��������ʧ��
		perror("fork failed");
		return -1;
	}

	my_pid  = getpid();
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
		sleep(1);
	}
	return 0;
}