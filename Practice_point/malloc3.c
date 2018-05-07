#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	char *str = (char *) malloc(10);
	char *st;
	st = (char *) malloc(10);
	strcpy(str, "INDIA\n");
	strcpy(st, "Guj\n");
	printf("%s", str);
	printf("%s", st);
	return 0;
}
