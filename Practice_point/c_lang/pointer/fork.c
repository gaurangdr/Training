#include<stdio.h>
int main()
{
    	printf("\n");
	int a, b;
	b=fork();
	b=fork();
	b=fork();
	b=fork();
//	printf("the value of b \n");
	if (b==0)
	{
		printf("child\n");
	}
	else
	{
		printf("parent\n");
	}
	printf("the value of b is %d\n",b);
	return 0;
}
