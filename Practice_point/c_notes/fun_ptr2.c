#include<stdio.h>

typedef int (*fun_ptr)(int, int);

int sum (int a, int b)
{
	return a + b;
}

int fun_pass(int a, int b, fun_ptr fun)
{
	return fun(a, b);
}

int main(void)
{
	int a = 10, b = 20;
	int c;
	c = fun_pass(a, b, sum);
	printf("%d\n", c);
	return 0;
}
