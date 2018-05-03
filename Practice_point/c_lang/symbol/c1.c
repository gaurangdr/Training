#include<stdio.h>
const int volatile r2;//=10;
int main()
{
	int *ptr=&r2;
	r2=10;
	*ptr=20;
	return 0;
}
