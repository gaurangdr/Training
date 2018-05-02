#include<stdio.h>
int main()
{
	struct s
	{
		int a:13;
		int b:8;
		int c:12;	//11;
	};
	struct s s1;
	printf("size is %d\n",sizeof(s1));
	return 0;
}
