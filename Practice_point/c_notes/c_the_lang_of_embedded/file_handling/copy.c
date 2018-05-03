#include<stdio.h>
int main(int argc, char *argv[])
{
	char c,buf[30];
	FILE *fs=NULL,*fd=NULL;
	int n;

	fs=fopen(argv[1], "r");
	fd=fopen(argv[2], "w+");

	do {
		c = fgetc(fs);
		fputc(c, fd);
	} while (c != EOF);

	close(fd);
	close(fs);

	return 0;
}
