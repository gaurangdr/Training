#include<stdio.h>
int main(void)
{
	int a = 10, b = 20;
	int const  *p = &a;
	printf("before:\n");
	printf("a = %d, b= %d, p= %x, *p =%d\n", a, b, p, *p);
	++p;
	printf("after:\n");
	printf("a = %d, b= %d, p= %x, *p =%d\n", a, b, p, *p);
	return 0;
}
