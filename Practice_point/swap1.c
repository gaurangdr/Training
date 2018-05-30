#include<stdio.h>
int main(void)
{
	int a = 10, b =20;
	printf("a: %d, b: %d\n", a, b);

	/* method 1 */
 	a = a + b - (b = a);

	printf("a: %d, b: %d\n", a, b);

	return 0;
}
