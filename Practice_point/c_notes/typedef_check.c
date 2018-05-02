#include<stdio.h>
int main()
{
//	typedef static int myint;
	typedef int myint;
	myint static  a =5;
//	myint a=3;
	printf("a is %d\n",a);
	int i,j,*q;
	typedef int a1[5];
	int  b[5][2]={1,2,3,4,5,6,7,8,9};
	q=b;
	for(i=0;i<10;i++)
	{
		printf("value : %d loc : %ul\n",*(q+i),q+i);
	}
	printf("size: %d\n",sizeof(b));
	return 0;
}
