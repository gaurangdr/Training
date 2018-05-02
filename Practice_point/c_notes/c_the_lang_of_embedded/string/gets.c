#include<stdio.h>
int main()
{
	char c[5];
	char *n;
	printf("Enter string:\t");
	n=gets(c);
	printf("Using printf funtion:\t%s\t%c\n",c,*n);
	printf("Using puts function:\t");
	puts(c);
	return 0;
}
