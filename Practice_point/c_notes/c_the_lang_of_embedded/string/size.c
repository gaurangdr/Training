#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="ABC\0";
	char s2[]="ABC";
	printf("String:\t%s\nsize using strlen:\t%d\nsize using sizeof:\t%d\n",s1,strlen(s1),sizeof(s1));
	return 0;
}
