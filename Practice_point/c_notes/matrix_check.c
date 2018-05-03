#include<stdio.h>
int main()
{
	int row,col,i,j;
	typedef int mat[5];
	mat m[3];

	row=(sizeof(m)/sizeof(m[1]));

	col=sizeof(m[1])/sizeof(m[1][1]);

	printf("Rows in a matrix is %d\nCol in a matriox is %d\nSize of matrix is %dx%d\n",row,col,row,col);
	return 0;
}
