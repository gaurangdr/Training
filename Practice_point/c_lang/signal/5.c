#include<stdio.h>
#include<stdlib.h>
#include<signal.h>
void dis(int sig)
{
	static int i=0;
	sleep(2);
	printf("Sig is %d\n",i++);
}
int main()
{
	sigset_t s1,s2;
	struct sigaction act1;

	char buf[100];
	int ret;

	sigemptyset(&s1);
	sigaddset(&s1,SIGINT);

	act1.sa_handler=dis;
	sigfillset(&act1.sa_mask);
	act1.sa_flags=0;
	sigaction(SIGINT,&act1,NULL);
	while(1)
	{
		printf("in sleep\n");
		sleep(1);
	}
	return 0;
}
