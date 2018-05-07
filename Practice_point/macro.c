#include<stdio.h>
#define ABS(x) ((x) < 0 ? (-(x)) : (x))
int main(void)
{
	printf("%d\n%d\n", ABS(-10), ABS(20));
	return 0;
}
