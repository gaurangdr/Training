#include <stdio.h>
#include "grandparent.h"
#include "parent.h"
int main(void)
{
	struct foo f;
	f.k = 10;
	printf("%d\n", f.k);
	return 0;
}
