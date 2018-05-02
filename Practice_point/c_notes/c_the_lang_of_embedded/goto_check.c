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
next: printf("good evening\n");
}
