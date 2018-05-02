#include<stdio.h>
#include<stdlib.h>
void allo(int **pp)
{
	*pp=(int*)malloc(sizeof(int));
	**pp=25;
}
int main()
{
	int *p=NULL;
//	*p=10;
//	printf("P value %d p add %ul\n",*p,p);
	allo(&p);
//	*p=20;
	printf("P value %d p add %x\n",*p,p);
	return 0;
}
