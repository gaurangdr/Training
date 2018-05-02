#include <stdio.h>
struct test
{
	int x;
	int y:1;// :32;
	int z;
};
int main()
{
	struct test t;
	int *ptr1 = &t.x;
	int *ptr2 = &t.z;
	printf("Size of int is: %d\n",sizeof(int));
	printf("diff is: %d\n", ptr2 - ptr1);
	return 0;
}
