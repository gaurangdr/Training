#include<stdio.h>
int main()
{
	typedef int a[5];
	a b[2],c;
	int row,colon,n=1;
	printf("Size of b is : %d\n", sizeof(b));
	printf("Size of c is : %d\n", sizeof(c));
	printf("Size of a is : %d\n", sizeof(a));
	printf("address of b is   : %x\n",b);
	printf("address of b+1 is : %x\n",b+1);
	printf("address of &b is  : %x\n",&b);
	printf("address of &b+1 is: %x\n",&b+1);
	printf("size of *b is     : %d\n",sizeof(*b));
	printf("size of **b is    : %d\n\n",sizeof(**b));
	printf("Addres of b is    : %x\n",b);
	printf("Addres of *b is   : %x\n",*b);
	printf("Addres of &b is   : %x\n",&b);
	printf("Addres of **b+1 is: %x\n",**b+1);
	printf("Addres of *b+1 is : %x\n",*b+1);
	
	
/*	for(row=0;row<2;++row)
	{
		for(colon=0;colon<5;++colon)
		{
			b[colon][row]=n++;
		}
	}
	printf("Matrix b is :\n");
        for(row=0;row<2;++row)
        {
                for(colon=0;colon<5;++colon)
                {       
                       printf("%d\t",b[colon][row]);
                }
		printf("\n");
        }
*/	return 0;
}
