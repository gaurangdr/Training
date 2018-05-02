#include<stdio.h>
int main()
{
	char s[30]={};
	int i=0;
	printf("Enter string:\t");
	fgets(s,30,stdin);
	printf("output string using fputs:\t");
	fputs(s,stdout);
	return 0;
}
