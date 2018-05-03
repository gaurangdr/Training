#include<stdio.h>
int main(void)
{
	int a = 0x11223344;
	char *c = (char *) &a;
	if (*c == 0x44)
		printf("little endian\n");
	else
		printf("big endian\n");
	return 0;
}
