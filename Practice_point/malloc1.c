#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr, *ptr2;
//	char *ptr;
	ptr = malloc(-1);
	if (ptr == NULL)
		printf("NULL\n");
//	ptr++;
	printf("*ptr: %x\n", *ptr);
	*ptr = 0x11223344;
	printf("SIZE: %d\n", sizeof(ptr));
	printf("ptr: %p\n", ptr);
	printf("*ptr: %x\n", *ptr);
	free(ptr);
	return 0;
}
