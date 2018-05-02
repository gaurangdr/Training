#include<stdio.h>
#include<string.h>

int main(void)
{
	int i;
	char tmp;
	char str[] = "gaurang";
	
	int len = strlen(str)-1;
	printf("Len : %d\n", len);
//	for (i = 0; i <= len; str[i] ^= str[len], str[len] ^= str[i], str[i] ^= str[len], i++, len--); // problem have to solve
//	for (i = 0; i <= len; str[i] += str[len], str[len] = str[i] - str[len], str[i] = str[i] - str[len], i++, len--); //problem have to solve
	for (i = 0; i <= len; tmp = str[i], str[i] = str[len], str[len] = tmp, i++, len--);
	printf("%s\n", str);
	return 0;
}
