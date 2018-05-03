#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig_handler(int signo);

int main()
{
	if((signal(SIGINT,sig_handler))==SIG_ERR)
		printf("Can't catch signal\n");
	while(1)
	{
		sleep(2);
		kill(getpid(),SIGINT);
	}
	return 0;
}

void sig_handler(int signo)
{
	if(signo==SIGINT)
		printf("Signal catched is %d\n",SIGINT);
}
