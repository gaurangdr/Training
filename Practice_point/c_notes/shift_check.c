#include<stdio.h>
#include<stdint.h>
int main()
{
//	int8_t a,b,c;
	int a,b,c;
	a=0xFFFFFFFF;
	b=a<<8;
	c=a>>8;
	printf("size\na : %d, b : %d, c : %d\n",sizeof(a),sizeof(b),sizeof(c));
	printf("a : %x\nb : %x\nc : %x\n",a,b,c);
	return 0;
}
