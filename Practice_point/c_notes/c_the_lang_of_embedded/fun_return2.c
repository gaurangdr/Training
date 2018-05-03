#include<stdio.h>
int main()
{
	int m;
	m=min(10,12);
	printf("min is %d\n",m);
	return 0;
}
int min(int a,int b)
{
//	(a<b)?(return b): printf("bye"); // not work give error
	return a < b ? a : b;
}
