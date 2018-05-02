#include<stdio.h>
#include<stdint.h>
//#include<stdlib.h>
//#include<string.h>
int main()
{
	int i=5;
	short s;
	long l;
	long long ll;
	unsigned short us;
	int8_t x=~2;
	uint8_t y;
//	char buffer[33];
	int ind=0x11223344;
	char *ptr=&ind;
	printf("ptr : %x %x %x %x\n",*ptr,*(ptr+1),*(ptr+2),*(ptr+3));
	y=x;
	printf("x = %d in binary is %x\n",x,x);
	printf("y = %d in binary is %x\n",y,y);	
	while(y)
	{
		if(y & 1)
			printf("1");
		else
			printf("0");
		y>>=1;
	}
	printf("\n");
//	itoa(i,buffer,2);
//	printf("binary is %s\n",buffer);
	printf("size of int       :%d\n",sizeof(i));
	printf("size of short     :%d\n",sizeof(s));
	printf("size of long      :%d\n",sizeof(l));
	printf("size of long long :%d\n",sizeof(ll));
	printf("size of int_t     :%d\n",sizeof(x));
	return 0;
}
