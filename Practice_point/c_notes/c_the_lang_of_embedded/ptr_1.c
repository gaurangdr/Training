#include<stdio.h>
int main()
{
	int m[2][3]={1,2,3,4,5,6};
	int *p=NULL;
	int **pp=NULL;
	int (*pa)[3]=NULL;
	
//****************************************************************
	printf("Size\n");
	printf("sizeof m is %d, row %d\n",sizeof(m),sizeof(m[1]));
	printf("p %d,*p %d\n",sizeof(p),sizeof(*p));
	printf("pp %d, *pp %d, **pp %d\n",sizeof(pp),sizeof(*pp),sizeof(**pp));
	printf("pa %d, *pa %d, **pa %d\n",sizeof(pa),sizeof(*pa),sizeof(**pa));
//**************************************************************
	p=m;
	pp=m;
	pa=m;

        printf("Size\n");
        printf("sizeof m is %d, row %d\n",sizeof(m),sizeof(m[1]));
        printf("p %d,*p %d\n",sizeof(p),sizeof(*p));
        printf("pp %d, *pp %d\n",sizeof(pp),sizeof(*pp));
	printf("pa %d, *pa %d, **pa %d\n",sizeof(pa),sizeof(*pa),sizeof(**pa));
//**************************************************************
	printf("(*(pa+1)+1) %d\n",*(*(pa+1)+1));
//	printf("(*(pp+1)+1) %d\n",**(pp));
//	printf("(*(pp+1)+1) %d\n",*(*(pp+1)+1));
	return 0;
}
