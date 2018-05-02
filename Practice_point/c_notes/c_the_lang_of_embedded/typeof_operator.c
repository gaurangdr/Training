#include<stdio.h>
int main()
{
	int a;
	typeof(a) b;
	b=10;
	char c;
	typeof(c) d='X';
	printf("B is %d and d is %d\n",sizeof(b),sizeof(d));
	return 0;
}
