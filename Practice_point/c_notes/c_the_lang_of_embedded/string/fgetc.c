#include<stdio.h>
int main()
{
	char *ptr,s[30];
	int i=0;
	printf("Enter string:\t");
	do
	{
		s[i]=fgetc(stdin);
	}while(s[i++]!='\n');
	i=0;
	printf("string output using fputc:\t");
	do
	{
		fputc(s[i],stdout);
	}while(s[i++]!='\n');
	return 0;
}
