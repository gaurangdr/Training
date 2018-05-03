#include <stdio.h>
#include <pthread.h>
#include<stdlib.h>
int counter=1;
pthread_mutex_t mutex1=PTHREAD_MUTEX_INITIALIZER;
void *print_hello(void *data)
{
//	char *c;
//	c=(char*) data;
//	long tid;
//	tid = (long) threadid;
//	printf("Hello World! It’s me, thread #\n");
	printf("%s\n",(char*)data);
//	sleep(5);
	printf("before lock counter %d\n",counter);	
	pthread_mutex_lock(&mutex1);
	counter--;
	pthread_mutex_lock(&mutex1);
	printf("after lock counter %d\n",counter);
	printf("thread going to exit\n");
	pthread_exit(NULL);
}

int main (int argc, char *argv[])
{
	pthread_t t1,t2;
	int rc;
	long t=1;
	char *msg1="SVNIT";
	char *msg2="India";
//	printf("In main: creating thread %ld\n", t);
	rc = pthread_create(&t1, NULL, print_hello, (void*) msg1);
	if (rc)
	{
		printf("ERROR; return code from pthread_create() is %d\n", rc);
		exit(1);
	}
	rc = pthread_create(&t2, NULL, print_hello, (void*) msg2);
	if (rc)
	printf("%d is rc\n",rc);
	pthread_join(t1,NULL);
	sleep(3);
	printf("Process going to terminate\n");
//	pthread_exit(NULL);
}
