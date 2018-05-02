#include<stdio.h>
int max(int, int);
int main(void)
{
	int a = 10, b = 12, m;
	m = max(a, b);
	printf("max = %d\n", m);
	return 0;
}
int max(int a, int b)
{
	int z, ret_value;
//	z = a > b ? a:b; // will work 
	ret_value = (a > b) ? (z = a) : (z = b); // will work
	printf("Ret value : %d z : %d\n", ret_value, z);
//	(a > b) ? z = a : z = b; // will not work, compilation error
	return z;
}
