#include<stdio.h>
int main()
{
	char str[]="India",*ptr;
	int i;
	printf("%s\n",str);
	for(i=0;i<6;++i)
	{
		printf("%c at loc %x\n",*(str+i),str+i);
	}
	return 0;
}
