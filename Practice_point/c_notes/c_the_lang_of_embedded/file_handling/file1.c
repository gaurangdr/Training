#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	char buf[50]="india";
	int i;
	FILE *fd=NULL;

	fd=fopen("/home/gaurang/file_handling/text.c","w+");

	if(fd>0) {
	fwrite(buf,4,1,fd);
	printf("%s\n",buf);
	} else {
		printf("Error\n");
	}

	close(fd);
	return 0;
}

