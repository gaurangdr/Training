#include<stdio.h>
int main()
{
	int n,ans;
	scanf("%d",&n);
	ans=fact(n);
	printf("Fact is %d\n",ans);
	return 0;
}
int fact(int n)
{
	if(n==1)
		return 1;
	return  n*fact(n-1);
}
