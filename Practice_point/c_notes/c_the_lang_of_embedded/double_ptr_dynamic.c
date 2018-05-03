#include<stdio.h>
#include<stdlib.h>

void naming(char ***p3)
{
	*p3 = (char**) malloc(sizeof(int*) * 3);
	**p3 = "Kerala";
	*(*p3 + 1) = "the god's";
	*(*p3 + 2) = "own country";
}
int main(void)
{
	char **pp = NULL;

	naming(&pp);

	printf("%s\n", *pp);
	printf("%s\n", *(pp + 1));
	printf("%s\n", *(pp + 2));

	free(pp);
	return 0;
}
