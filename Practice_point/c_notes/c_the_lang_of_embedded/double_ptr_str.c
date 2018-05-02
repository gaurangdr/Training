#include<stdio.h>
#include<stdlib.h>
int main()
{
	char **pp;
	pp=malloc(3*sizeof(int*));
	pp[0]="Have";
	pp[1]="a good";
	pp[2]="day";
	printf("Add of pp is %x\n",&pp);
	printf("pp= %x\n",pp);
	printf("pp+1= %x\n",pp+1);
	printf("pp+2= %x\n",pp+2);
	printf("%s\t%s\t%s\n",pp[0],pp[1],pp[2]);
	printf("%x\t%x\t%x\n",pp[0],pp[1],pp[2]);
	printf("%c\t%c\t%c\n",*pp[0],*pp[1],*pp[2]);
	printf("pp add %x\n",pp);
	return 0;
}
