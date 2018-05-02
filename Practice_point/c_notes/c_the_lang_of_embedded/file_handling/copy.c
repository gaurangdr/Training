#include<stdio.h>
int main()
{
	char c,buf[30];
	FILE *fs=NULL,*fd=NULL;
	int n;
	fs=fopen("gau.txt","r");
	fd=fopen("gau_copy.txt","w+");
	do
	{
		c=fgetc(fs);
		fputc(c,fd);
	}while(c!=EOF);
	close(fd);
	close(fs);
	return 0;
}
