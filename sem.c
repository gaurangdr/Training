#include<stdio.h>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
#include<semaphore.h> /*  sem_t */

unsigned long int count;
sem_t sem;
int num;
int sem_val;

void *countIncrement(void *arg);

int main(void)
{
	pthread_t t[5];
	int k;
	time_t start, end;
	
	/* semaphore: initial value = 1, semaphore for the threads */
	if (sem_init(&sem, 0, 2)) {
		printf("Error: semaphore not initialize\n");
		return -1;
	}

	start = time(NULL);
	
	for (k = 0; k < 5; k++) {
		sleep(1);
		if (pthread_create(&t[k], NULL, countIncrement, (void *) &t[k])) {
			printf("Error: thread not created\n");
			return -1;
		}
	}

	for ( k = 0; k < 5; k++) {
		if (pthread_join(t[k], NULL)) {
			printf("Error: pthread join not successful\n");
			return -1;
		}
	}

	end = time(NULL);

	printf("count = %ld\n", count);
	sem_destroy(&sem);

	printf("Time : %lf\n", difftime(end, start));
	return 0;
}

void *countIncrement(void *arg)
{
	unsigned long i;
	sem_getvalue(&sem, &sem_val);
	printf("bw_sem: %d\n", sem_val);

	/* semaphore accquired */
	if (sem_wait(&sem)) { /* wait */
		printf("Error: sem wait fail\n");
		pthread_exit(NULL);
	}

		sem_getvalue(&sem, &sem_val);
		printf("aw_sem: %d\n", sem_val);
		num++;	
		printf("Thread %d\n", num);
//		printf("Count %ld\n", count);
		sleep(5);
		count++;
//		printf("Count %ld\n", count);

	/* release the semaphore */
	if (sem_post(&sem)) { /* post */
		printf("Error: sem wait fail\n");
		pthread_exit(NULL);
	}
	sem_getvalue(&sem, &sem_val);
	printf("ap_sem: %d\n", sem_val);
	/*thread exit */
	pthread_exit(NULL);
}
