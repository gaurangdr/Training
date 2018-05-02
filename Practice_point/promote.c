#include<stdio.h>

int main(void)
{
	int a = -100;
	unsigned int b = 10;
	char c = -120;
	unsigned char d = 0;
	(c + d) > 0 ? printf("True\n") : printf("False\n");
	(a + b) > 0 ? printf("True\n") : printf("False\n");
	return 0;
}
