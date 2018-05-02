#include<stdio.h>
#include<stdlib.h>
void naming(char ***p3)
{
	*p3=(char**)malloc(sizeof(int*)*3);
	**p3="Kerala";
	*(*p3+1)="the god's";
	*(*p3+2)="own country";
}
int main()
{
	char **pp=NULL;
	naming(&pp);
	printf("%s\n%s\n%s\n",*pp,*(pp+1),*(pp+2));
	return 0;
}
