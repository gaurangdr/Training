#include <stdio.h>
int main(void)
{
	int (*p)[2] = NULL;
	p++;
	printf("%ld\n", p--);
	printf("%d\n", sizeof(*p));

	int arr[3][2] = {1,2,3,4,5,6};

	p = arr;

	printf("%d\n", *(*(p+1) + 1));
	return 0;
}
