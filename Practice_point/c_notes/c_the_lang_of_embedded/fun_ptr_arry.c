#include<stdio.h>
void p1()
{
	printf("p1\n");
}
void p2()
{
	printf("p2\n");
}
void p3()
{
	printf("p3\n");
}
typedef void (*funptr)(void);
funptr fun[]={p1,p2,p3};
int main()
{
	(*fun[0])();
	fun[1]();
	fun[2]();
	return 0;
}	
