#include<stdio.h>
int fun_pass(int a, int b ,int (*fun)(int,int))
{
	return fun(a,b);
}
int sum(int a, int b)
{
	return a+b;
}
int diff(int a, int b)
{
	return a-b;
}
int main()
{
	printf("sum =%d\n",fun_pass(5,10,sum));
	return 0;
}
	
