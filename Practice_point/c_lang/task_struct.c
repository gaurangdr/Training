//#include<stdio.h>
#define __KERNEL__
#include<linux/sched.h>
int main()
{
	printf("Size of task_struct %d\n",sizeof(struct task_struct));
	return 0;
}

