#include<stdio.h>
int main()
{
	enum dir
	{
		north,
		south,
		west,
		east,
	};
	enum dir d1;
	d1=south;
	printf("%d\n",d1);
	return 0;
}
