#include<stdio.h>
#include<unistd.h>
int main(void)
{
//	float x;
	double x;
	int i = 0;
	int float_size = sizeof(x);
	printf("Float size: %d\n", float_size);
	sleep(5);
	for (x = 100000001.0f; x <= 100000010.0f; x += 1.0f) {
	    printf("%d\n", i++);
	}
	return 0;
}
