#include<stdio.h>
int main()
{
	int a=10,b=20;
	int const  * p=&b;
//	printf("before:\na = %d, b= %d, p= %x, *p =%d\n",a,b,p,*p);
	printf("addresses Before\n");
	printf("a : %x,\tp : %x\n",&a,p);
	printf("b : %x\n",&b);

	++p;
	
	printf("addresses after\n");
	printf("value of *p %d\n",*p);
	printf("a : %x,\tp : %x\n",&a,p);
	printf("b : %x\n",&b);
//	printf("after: \na = %d, b= %d, p= %x, *p =%d\n",a,b,p,*p);
	return 0;
}
