#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Hello",s2[10];
	int i,j;
	j=strlen(s1);
	strrev(s1);
	printf("String len %s\n",s1);
	return 0;
}
