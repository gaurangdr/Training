#include<stdio.h>
int main()
{
	int ar[3][4],(*ptr)[4]=NULL,**ptr1=ar;
	int i,j;
	ptr=ar;
	for (i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			ar[i][j]=rand()%40;
			printf("%d ",ar[i][j]);
		}
		printf("\n");
	}
	printf("god bless us\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d ",*(*(ptr+i)+j));
		}
		printf("\n");
	}
	printf("ptr: %x  value: %d\n",ptr,**ptr);
	printf("ar : %x  value: %d\n",ar,**ar);
	printf("ptr+1: %x  value: %d\n",ptr+1,**(ptr+1));
	printf("ar+1 : %x  value: %d\n",ar+1,**(ar+1));
	
	ptr=*ptr+1;
	printf("%d\n",**ptr);
	return 0;
}
