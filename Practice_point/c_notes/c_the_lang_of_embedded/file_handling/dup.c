#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void)
{
	int fw = open ("dup2.txt", O_APPEND|O_WRONLY);
	dup2(fw,1);
	printf("SVNIT is here\n");
	close(fw);
	return 0;
}
