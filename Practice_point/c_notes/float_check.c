#include<stdio.h>
int main(void)
{
	float k = 2.0;
	while (k != 3.0 && k < 3.5)
	{
		printf("k : %f\n", k);
		k += 0.2;
	}
//	float b;
	double b;
	b = 3.000000;
	b = b + 0.2;
	if (b == 3.2)
		printf("Sahi pakde hai\n");

	double k1 = 2.0;
	while (k1 != 3.0 && k1 < 3.5)
	{
		printf("k1 : %f\n", k1);
		k1 += 0.2;
	}
	return 0;
}
