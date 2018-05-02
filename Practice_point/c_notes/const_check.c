#include<stdio.h>
int main()
{
	int a=10,b=20;
	int const  * p=&a;
	printf("before:\na = %d, b= %d, p= %x, *p =%d\n",a,b,p,*p);
	++p;
	printf("after: \na = %d, b= %d, p= %x, *p =%d\n",a,b,p,*p);
	return 0;
}
