#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	FILE *fd=NULL;
	char s[40];
	fd=fopen("gaurang.txt","w+");
	if(!fd)
	{
		printf("Error in file open\n");
		return 0;
	}
//	scanf("%s",s); scanf dont support space in string
	fgets(s,40,stdin); // no problem of using fgets
	printf("%s",s);
	fputs(s,fd);
	close(fd);
	return 0;
}
