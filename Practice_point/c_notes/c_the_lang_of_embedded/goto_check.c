#include<stdio.h>
void fun(void);
int main()
{
	printf("Good morning\n");
	goto next;
	printf("good afternnon\n");
next:	fun();
}
void fun()
{
next1: printf("good evening\n");
}
