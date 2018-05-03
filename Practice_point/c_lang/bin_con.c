#include<stdio.h>
int main()
{
	int n = 10;
	while(n)
	{
		ans=ans+(10^i)+(n%2);
		n=n/2;
		i++;
	}
	printf("ans is %d\n",ans);
	return 0;
}
