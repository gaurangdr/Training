#include<stdio.h>
int main()
{
	int *pi1=0, *pi2=19;
	char *pc1=0,*pc2=20;
	void *pv1=0,*pv2=20;
	double *pd1=0,*pd2=20;
	
	int i;
//	i=pi2-pi1;
//	i=pc2-pc1;
//	i=pv2-pv1;
	i=pd2-pd1;
	printf("i is %d\n",i);
	return 0;
}
