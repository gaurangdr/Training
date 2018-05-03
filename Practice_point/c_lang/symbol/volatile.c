#include<stdio.h>
int volatile const a1=10;
int main()
{
	int *ptr1=&a1;
	printf("a is %d\n",a1);
	return 0;
}
