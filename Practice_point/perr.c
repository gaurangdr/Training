#include<stdio.h>
#include<stdlib.h>

#define error_handle(msg) do { perror(msg); exit(EXIT_FAILURE);} while(0);

int main(void)
{
	int *ptr;
	ptr = malloc(-1);
//	error_handle("fail_string");
	error_handle("");
	printf("IND\n");
	return 0;
}
