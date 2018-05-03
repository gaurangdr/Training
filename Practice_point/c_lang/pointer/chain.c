#include<stdio.h>
int main()
{
	int *p1,**p2;
	int a=11,b;
	p1=&a;
	p2=&p1;
	in1(p2);
	printf("a is %d\n",**p2);
	return 0;
}
void in1(int **p2)
{
	scanf("%d",*p2);
	return;
}
