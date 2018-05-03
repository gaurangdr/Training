#include<stdio.h>
int main(void)
{
	void *p;
//	void *p1;
	printf("sizeof void address: %d\n", sizeof(p));
	printf("sizeof *void %d\n", sizeof(*p));
	return 0;
}
