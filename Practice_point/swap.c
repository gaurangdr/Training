#include<stdio.h>
int main(void)
{
//	int a = 10, b = 20;
	char a = 'A', b ='B';
	a ^= b;
	b ^= a;
	a ^= b;
	printf("a %d, b %d\n", a, b);
	printf("a %c, b %c\n", a, b);
	return 0;
}
