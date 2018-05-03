#include<stdio.h>
int main()
{
	int ar[3]={11,22,33},i,j;
	int *ptr1=NULL,(*ptr2)[3]=NULL;
	ptr1=ptr2=ar;
	printf("size\n");
	printf("%d  %d\n%d  %d\n",sizeof(ar),sizeof(*ptr2));
	return 0;
}
