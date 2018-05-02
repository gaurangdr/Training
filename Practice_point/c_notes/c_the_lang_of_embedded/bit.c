#include<stdio.h>
int main()
{
	int a=0xAAAAAAAA;
	int b;
	a=a|(1<<8);	//set the lowest bit of 2nd byte
	printf("a is %x\n",a);
	a=a&(~(1<<8));	//reset the bit
	printf("a is %x\n",a);
	a=a^(1<<7|1<<8);//compliment the bit
	printf("a is %x\n",a);
	b=(a&(1<<31))&&1; // query the msb bit status
	printf("query the msb of data %x\n",b);
	return 0;
}
