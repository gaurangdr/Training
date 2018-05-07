#include<stdio.h>
#define MAX(X, Y) (((X) > (Y)) ? (X) : (Y))
int main(void)
{
	int a = 10, b = 20;
	printf("MAX : %d, MAX: %d\n", MAX(a, b), MAX(b, 30));
	return 0;
}
