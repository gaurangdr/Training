#include<stdio.h>
int (*fun)(int , int);
int sum(int a, int b)
{
	return a+b;
}
int main()
{
	int ans;
	fun=sum;
	ans=(*fun)(5,6);
	printf("Ans is %d\n",ans);
	return 0;
}
