#include<stdio.h>
int main()
{
	int a=10;
	int *pi=&a;
	char c='A';
	char *pc=&c;
	double d=5.45;
	double *pd=&d;
	void *pv;
	
	pi=pc;
	printf("pi %d\n",sizeof(*pi));
	printf("pc %d\n",sizeof(*pc));

	pv=pc;
	pi=pv;
	printf("pi %x\n",sizeof(*pi));
	return 0;
}
