#include<stdio.h>
int main()
{
	/* total 33 bit, so needed 8 bytes */
	struct s 
	{
		int a:14;
		int b:7;
		int c:12	//11;
	};
	struct s s1;
	printf("size is %d\n",sizeof(s1));
//	printf("%x\n", &s1.a);
	return 0;
}
