#include<stdio.h>
int main()
{
	int a=0x11223344;
	char *ptr=&a;
	if(*ptr==0x44)
		printf("Little endian\n");
	else if(*ptr==0x11)
		printf("Big endian\n");
	return 0;
}
