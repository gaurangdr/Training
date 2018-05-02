#include<stdio.h>
#include<stdlib.h>
void alloc(char ***p3)
{
	*p3=(char**)malloc(sizeof(char*)*2);
	**p3="India";
	*(*p3+1)="Bharat";
}
int main()
{
	char **p;

//	p = (char **) malloc(sizeof(int*) * 2); //2 heap memory alloated and p store first heap memory location
	alloc(&p);
	printf("p3 = %s\n%s\n",*p,*(p+1));


	return 0;
}
