#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char *ptr = malloc(10*sizeof(char));
	int i;
	printf("%p\n", ptr);

	for (i = 0; i < 10; i++) {
		ptr[i] = i + 20;
	}
	printf("%p\n", ptr);
	++ptr;
	printf("%p\n", ptr);
//	++ptr;
/*	++ptr;
	++ptr;
	++ptr;
*/
	free(&ptr[-1]);
	return 0;
}
