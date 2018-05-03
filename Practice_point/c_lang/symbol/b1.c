#include<stdio.h>
int const a=10;

int main()
{
	const int aa=10;
	int *p;
	p=&aa;
	aa=20;
	*p=2;
	printf("a is %d\n",*p);
	return 0;
}
