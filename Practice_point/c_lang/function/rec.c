#include<stdio.h>
int main()
{
	int n=12;
	int ans;
	ans=hex(n);
	printf("%d\n",ans);
	return 0;
}
int hex(int n)
{
	if(n)
	{
		return n;
	}
	int bin,rem,i=1;
	while(n)
	{
		rem=n%2;
		bin=rem+i*rem;
		i=i*10;
	}
	
