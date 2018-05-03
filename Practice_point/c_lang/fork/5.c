#include<stdio.h>
#include<unistd.h>
int main(void)
{
	pid_t p1, p2;
	int i = 0;
	if (p1 = fork())
		printf("Parent\n");
	else if (i == 0)
		printf("p1 %d\n", p1);
	else
		printf("Undef\n");
	return 0;
}
