#include<stdio.h>
int main(void)
{
	FILE *fp;
	fp = fopen("delete.txt", "r");
	char ch;
	while ((ch = getc(fp)) != EOF) {
		putchar(ch);
	}
	fclose(fp);
	return 0;
}
	
