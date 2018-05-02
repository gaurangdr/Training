#include<stdio.h>
int main()
{
	int m;
	m=min(10,5);
	printf("min is %d\n",m);
	return 0;
}
int min(int a,int b)
{
	(a<b)?return b: printf("bye");
}
