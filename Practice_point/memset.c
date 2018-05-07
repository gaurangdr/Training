#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[] = "INDIA";
	int len = strlen(str);
	printf("%s\n", str);
	memset(str, 200, len);
	printf("%s\n", str);
	return 0;
}
