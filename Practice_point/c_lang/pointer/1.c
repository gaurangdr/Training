#include<stdio.h>
int main()
{
	int *ptr;
	char a,b;
	a=0x10;
	b=0x12;
	ptr=&b;
	printf("hi %x\n",*ptr);
	return 0;
}
