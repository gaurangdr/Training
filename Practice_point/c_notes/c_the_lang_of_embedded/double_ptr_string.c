#include<stdio.h>
int main(int argc,char *argv[])
{
	int i;
	printf("Total number of arguments %d\n",argc);
	for(i=0;i<argc;++i)
	{
		printf("argumet %d is %s\n",i,*(argv+i));
	}
	printf("Bye bro\n");
	return 0;
}
