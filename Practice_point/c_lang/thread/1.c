#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
void* fun(void *msg)
{
	printf("msg is :\n%s\n",(char*)msg);
	pthread_exit(NULL);
	return;
}
int main()
{
	pthread_t t1;
	char *msg="India";
	pthread_create(&t1,NULL,fun,(void*)msg);
	return 0;
}
