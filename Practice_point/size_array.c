#include <stdio.h>
int main(void)
{
	int arr[5] = {1,2,3,4,5};
	int *ptr = arr;
	int size = *(&arr + 1) - arr; // works
//	size = (&arr + 1) - arr; // compile error as - op betwn double pointer and pointer
	printf("%d\n", size);

	int ar[2][3];
	int **p = ar;

	int sub = p - ptr; // error
	return 0;
}
