#include<stdio.h>
extern int a;
const int b;
static const int c;//=10;
int *ptr3;
static void dis(void);
int main()
{
//	a=10;
//	c=20;
	int *ptr1,*ptr2,*ptr4;
	ptr4=&c;
	*ptr4=40;
	ptr1=&a;
	*ptr1=500;
	ptr3=&b;
	*ptr3=44;
//	*ptr1=10;
	printf("a is %d\n",a);
	printf("b is %d and c is %d\n",*ptr3,c);
	dis();
	return 0;
}
static void dis(void)
{
	printf("Hello from sym file\n");
	return;
}
