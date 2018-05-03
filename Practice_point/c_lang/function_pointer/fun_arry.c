#include<stdio.h>
int sum(int a, int b)
{
	return a+b;
}
int diff(int a, int b)
{
	return a-b;
}
int (*fun[2])(int a, int b)={sum,diff};
//int (*fun1)(int a, int b) fun[] = {sum,diff}; // error
//fun[0]=int sum(int, int); ---error of storage class
//fun[0] = diff;
int main()
{
	fun[0] = diff;
	printf("sum %d\n",fun[0](10,5));
	printf("diff %d\n",fun[1](10,5));
	return 0;
}
