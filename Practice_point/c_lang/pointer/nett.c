#include<stdio.h>
int main()
{
	int a,b;
	scanf("%x",&a);
	b = big(&a);
	printf("big endian: %x\n",b);
	return 0;
}
int big(char *ptr)
{
	int i,b;
	char *pt=&b;
	for(i=0;i<4;i++)
	{
		*(pt+i)=*(ptr+3-i);
	}
	return b;
}
