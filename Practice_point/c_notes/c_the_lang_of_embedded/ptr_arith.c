#include<stdio.h>
int main()
{
	int *p1=(int*)100,*p2=(int*)140;
	void *v1=400,*v2=440;
	printf("value %d\n",p2-p1);
	printf("value %d\n",v2-v1);
	v1=p1;
	v2=p2;
	++v1;
	printf("value %d\n",v2-v1);
	return 0;
}
