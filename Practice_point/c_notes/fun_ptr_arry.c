#include<stdio.h>

void p1(void)
{
	printf("p1\n");
}

void p2(void)
{
	printf("p2\n");
}

void p3(void)
{
	printf("p3\n");
}

typedef void (*funptr)(void);

funptr fun[]={p1,p2,p3};

int main(void)
{
	(*fun[0])();
	fun[1]();
	fun[2]();
	return 0;
}	

