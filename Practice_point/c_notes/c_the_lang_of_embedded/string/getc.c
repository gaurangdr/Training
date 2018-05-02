#include<stdio.h>
int main()
{
	char c='\0', s[30]={};
	int i=0;
	while(c!='\n') // one can effectively implement same logic using do-while instead of while so variable c not needed
	{
		c=(char)getc(stdin);
		s[i++]=c;
	}
	i=0;
	do
	{
		putc(s[i],stdout);
	}while(s[i++]!='\n');
	return 0;
}
