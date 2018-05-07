#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int a = 4;
	printf("%lu\n", sizeof(malloc(a)));
	return 0;
}
