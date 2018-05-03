#include<stdio.h>
int main()
{
	int n=5,m;
	m=dis(n);
	return 0;
}
int dis(int n)
{
	if(n==0)
		return 0;
	else 
	printf("dis %d\n",n);
	dis(n-1);
}
