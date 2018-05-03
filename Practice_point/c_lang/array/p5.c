#include<stdio.h>
int main()
{
	int nar,nc,nr;
	nar=3;
	nr=2;
	nc=3;

	int (*ptr)[nr][nc],ar[nar][nr][nc],i,j,k;
	for(i=0;i<nar;++i)
	{
		printf("\t\t%d array:\n",i+1);
		for(j=0;j<nr;++j)
		{
			for(k=0;k<nc;++k)
			{
				ar[i][j][k]=rand()%40;
				printf("%d ",ar[i][j][k]);
			}
			printf("\n");
		}
	}
	
	ptr=ar;
	for (i=0;i<nar;++i)
	{
		printf("\t\t\t array : %d\n",i+1);
		for(j=0;j<nr;j++)
		{
			for(k=0;k<nc;k++)
			{
				printf("%d ",*(*(*(ptr+i)+j)+k));
			}
			printf("\n");
		}
	}
	return 0;
}
