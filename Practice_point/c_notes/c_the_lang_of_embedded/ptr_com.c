#include<stdio.h>
int main()
{
	int a=0xaabbcc10;
	int *pi=&a;
	char c='A',*pc=&c;
	void *pv;
	printf("size of types\n");
	printf("int(a) : %d\tint(*pi) : %d\n",sizeof(int),sizeof(*pi));
	printf("char(c) : %d\tchar(*pc) : %d\n",sizeof(char),sizeof(*pc));
//	pv=pi;
//	pc=pv;
	pc=pi;
	printf("\nchar(c) : %d\tchar(*pc) : %d\n",sizeof(char),sizeof(*pc));
	printf("value: %x\n",*pc);	
	return 0;
}
