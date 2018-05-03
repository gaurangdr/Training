#include<stdio.h>
int main(void)
{
	char str[] = "soft";
	if (str[3] == 't')
		printf("little endian\n");
	else
		printf("big endian\n");
	return 0;
}
