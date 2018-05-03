#include<stdio.h>
int main()
{
	int a[2][3]={11,22,33,44,55,66};
	int (*ptr)[3];
	ptr=a;
	printf("size \n");
	printf("(ptr): %d\n",sizeof(ptr));
	printf("(*ptr): %d\n",sizeof(*ptr));

	printf("values\n");
	printf("%d \n", **ptr);
	printf("%d\n",*(*ptr+1));
	printf("%d\n",*(*ptr+2));
	printf("%d\n",**(++ptr));
	return 0;
}
	
