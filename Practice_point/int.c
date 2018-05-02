#include<stdio.h>
int main(void)
{
	int a = 0xffffffff;
	int b = 0x7fffffff;
	char c = 0xff;
	char d = 0x8f;
	char e = 0x00;
	int i;
	printf("A = %d\n", a);
	printf("B = %d\n", b);
	printf("C = %d\n", c);
	printf("D = %d\n", d);

	for (i = 0; i <= 256; i++) {
		printf("i = %d e = %x e = %d\n", i, e, e);
		e++;
	}
	return 0;
}
