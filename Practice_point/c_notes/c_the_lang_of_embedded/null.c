#include<stdio.h>
int main(void)
{
	void *p = NULL;
	printf("%lu\n", sizeof(p));
	printf("%lu\n", sizeof(*p));
	printf("%lu\n", sizeof(NULL));
	printf("%lu\n", NULL);

	void *ptr = 0x01;
//	int *ptr = 0x01;
	printf("%x\n", ptr);
	ptr++;
	printf("%x\n", ptr);
	return 0;
}
