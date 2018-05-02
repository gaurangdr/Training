#include<stdio.h>
#include<string.h>
void cpy(char const*, char *, int);
int main()
{
	int n;
	char srs[30];
	memset(srs,0,30);
	fgets(srs,30,stdin);
	n=strlen(srs);
	char tar[n];
	memset(tar,0,n);
	cpy(srs,tar,n);
	fputs(tar,stdout);
	printf("size oftar : %d\n",sizeof(tar));
	return 0;
}

void cpy(char const *src,char *dest, int n)
{
	int i=0;
	do
	{
		dest[i]=src[i];
		
	}while(src[i++]!='\n');
}
