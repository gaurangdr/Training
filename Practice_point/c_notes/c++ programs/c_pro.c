#include<stdio.h>
int main()
{
	int ans;
	ans=sum(10);
	printf("Sum for 10 is %d\n",ans);
	ans=sum(10,20);
	printf("Sum for 10 and 20 is %d\n",ans);
	ans=sum(10,20,30,40);
	printf("Sum for 10, 20, 30 and 40 is %d\n",ans);
	return 0;
}
int sum(int a, int b, int c, int d)
//int sum(int a, int b=0, int c=0, int d=0)
{
        return a+b+c+d;
}
