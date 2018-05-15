#include<stdio.h>
int main(void)
{
	int num1 = 9;
	int num2 = -2;
	int res = num1 ^ num2;
	if (res < 0)
		printf("Opp\n");
	else
		printf("Same\n");
	return 0;
}
