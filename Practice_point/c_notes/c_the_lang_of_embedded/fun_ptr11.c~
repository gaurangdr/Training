#include<stdio.h>
typedef int (*funptr) (int, int);
int sum(int a, int b)
{
	return a+b;
}
int minus(int a, int b)
{
	return a-b;
}
int fun_pass(int a, int b,funptr fun)
{
	return fun(a,b);
}
int main()
{
	int ans;
	ans=(*fun_pass)(10,5,sum);
	printf("Ans for 10+5 : %d\n",ans);
	ans=fun_pass(10,5,minus);
	printf("Ans for 10-5 : %d\n",ans);
	return 0;
}
