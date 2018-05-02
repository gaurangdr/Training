#include<stdio.h>
int main()
{
//	close(1);
//	close(0);
	int a;
	char e[10];
	char s[]="Embedded\n";
	write(0,s,10);
	scanf("%s",e);
	printf("%s\n",e);
//	scanf("%d",&a);
//	printf("Gau\n");
	return 0;
}
