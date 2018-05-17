#include <stdio.h>
#include "file1.h"
#include "file2.h"

extern int a = 1025;

int a;
int main(void)
{
//	int a;
//	int a;
//	a = 20;
	printf("%d\n", a);
	printf("%p\n", &a);
	return 0;
}
