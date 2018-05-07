#include<stdio.h>
#include<stdarg.h>

float avrg(int num, ...);

int main(void)
{
	printf("Avg %f\n", avrg(4, 10, 20, 30, 41));
	return 0;
}

float avrg(int num, ...)
{
	va_list valist;

	int sum = 0;

	va_start(valist, num);

	for (int i = 0; i < num; i++)
		sum += va_arg(valist, int);

	printf("%d\n", sum);

	va_end(valist);

	return (float) sum / num;
}
