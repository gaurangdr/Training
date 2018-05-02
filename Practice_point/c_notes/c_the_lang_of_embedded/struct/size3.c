#include<stdio.h>
#include<string.h>
struct data
{
	int a:1;
	int b:1;
};
int main()
{
	struct data d;
	memset(&d,0,4);
	d.a = 1;
	d.b=0;
	printf("size of struct:\t%d\n",sizeof(d));
	printf("value of a is %x\n",d.a);
	printf("value of b is %x\n",d.b);
	return 0;
}
