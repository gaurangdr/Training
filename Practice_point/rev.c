#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[] = "India";
	char *p = str, *q = NULL;
	int len = strlen(str), i = 0;
	printf("len : %d\n", len);
	for (q = p + len - 1; p < q; *p = *p ^ *q, *q = *p ^ *q, *p = *p ^ *q, p++, q--, i++);
	printf("%s, %d", str, i);
	return 0;
}
	

