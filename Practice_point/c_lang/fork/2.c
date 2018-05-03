#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	pid_t pid1,pid2;
	pid1=fork();
	if (pid1)
	{
		wait();
		pid2=fork();
		printf("parent fork a second child\n");
		if(pid2)
		{
			wait();
			printf("parent after second child\n");
		}
		else
		{
			printf("second child proces\n");
		}
	}
	else
	{
		sleep(2);
		printf("first child process\n");
	}
	return 0;
}
