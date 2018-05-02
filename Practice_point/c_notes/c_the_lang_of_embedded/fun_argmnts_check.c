#include<stdio.h>
int main()
{
	int a;
	a=sum(10,5);
	printf("sum : %d\n",a);
	return 0;
}
sum(int a,int b, int c)
{
	c=2;
	return a+b+c;
}
