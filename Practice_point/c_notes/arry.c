#include<stdio.h>

int main(void)
{
	int d;
	d = 2;
	int a[d];
	d = 5;
	printf("size of array : %d d : %d a[0] : %d\n", sizeof(a), d, a[0]);
	return 0;
}
