#include<stdio.h>
#include<stdlib.h>
int * return_add1()
{
	int a = 50;
	printf("Gau %d\n",a);
	return &a;
}
 
int * return_add2()
{
	int *ptr = (int *)malloc(sizeof(int));
	*ptr = 20;
	return ptr;
}
int main()
{
	int *p1 = return_add1();
	int *p2 = return_add2();
	/* deference the pointers */
	printf("%d\n" , *p2); /* this should give 20;*/
	printf("%d\n", *p1); /* the program should probably seg fault */
	return 0;
}
