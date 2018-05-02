#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int *ptr;
	int ptr1[10];
	ptr = (int *) malloc(10);
	printf("Sizeof : %d\n", sizeof(ptr));
	printf("Sizeof : %d\n", sizeof(*ptr));
	printf("Sizeof : %d\n", sizeof(ptr1));
	printf("Sizeof : %d\n", sizeof(*ptr1));
	return 0;
}
