/*
	This program shows how semaphore value increment and decrement 
*/

#include<stdio.h>
#include<unistd.h>
#include<pthread.h>

#define NUM 5

void *hello(void *i)
{
	printf("i = %d\n", *(int *) i);
	sleep(3);
	printf("i = %d\n", *(int *) i);
	return i;
}
int main(void)
{
	pthread_t t[NUM];
	int j, i = 0;
	for (i = 0; i < 5; i++) {
		if (pthread_create(t + i, 0, hello, &i))
			printf("Thread creation failed\n");
	}
	printf("Thread created: %d\n", i);
	for(j = 0; j < 5; j++)
		pthread_join(t[j], NULL);
	return 0;
}
