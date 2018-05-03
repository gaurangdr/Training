#include<stdio.h>

//double add(int a, int b, int c);
int main()
{
	double sum;
//	sum=add(10,20);
//	printf("sum : %lf\n",sum);
	printf("sum : %f\n",add(11,22,33));
	return 0;
}
  add(int a, int b, int c)
{
	double sum;
	sum=a+b+c;
	printf("sum : %f\n",sum);
	return sum;
}
