#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	char *c1=NULL,*c2=NULL;	//[]="123";
	
// code part1 which is compile and exuted successfully
	c1=(char *)malloc(10);
	*c1='1';
	*(c1+1)='2';
	*(c1+2)='3';
	n=atoi(c1);
	printf("Value of c in integer is %d\n",n);
	free(c1);

// code part2 which compile with warning and give wrong output
        c2=(char *)malloc(10);
        *c2="123";	// give warning
	n=atoi(c2);
        printf("Value of c in integer is %d\n",n);	//give wrong output
        free(c2);

	return 0;
}
