#include <stdio.h>
int main(void)
{
	int *pi = NULL;
	pi++;
	printf("int : %p\n", pi);

	char *pc = NULL;
	pc++;
	printf("char : %p\n", pc);

	float *pf = NULL;
	pf++;
	printf("float : %p\n", pf);

	double *pd = NULL;
	pd++;
	printf("double : %p\n", pd);

	void *pv = NULL;
	pv++;
	printf("void : %p\n", pv);

	return 0;
}
