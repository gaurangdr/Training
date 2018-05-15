#include<stdio.h>
//register int a = 10; //error as register var never use as a global variable
int main(void)
{
	register int a = 10;
	a++;
	printf("%d\n", a);
	return 0;
} 
