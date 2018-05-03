#include<stdio.h>
int val=10;
int const *ptr1;//=&val;
int main()
{
//	*ptr1=20;
	ptr1=&val;
	*ptr1=33;
	val=20;
	return 0;
}
