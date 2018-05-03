#include<stdio.h>
int add(int n)
{
	int sum=0;
	static int i=0;
	printf("before fun call i=%d and n= %d\n",++i,n);
	if(n==1)
		return 1;
	printf("After fun call i=%d and n= %d\n",i,n);
	sum=n+add(n-1);
	return sum;
}
