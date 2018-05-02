#include<stdio.h>
int main(void)
{
	union ex {
		int a;
		char b;
		float c;
	} un;
	un.a = 0xaabbccdd;
	printf("%x\n", un.b);
	return 0;
}
