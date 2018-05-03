#include<stdio.h>
int main()
{
	int pid1;
	pid1=fork();
	if(pid1)
	{
		printf("Parent\n");
		sleep(10);
	}
	else
	{	
		sleep(5);
		printf("child\n");
	}
	return 0;
}
