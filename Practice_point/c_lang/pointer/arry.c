#include<stdio.h>
int main()
{
	int a1[6]={1,2,3,4,5,6},(*a2)[6],a3[2][3]={11,22,33,44,55,66};
	printf("size a[6]-%d and *a - %d\n",sizeof(a1),sizeof(*a1));
	printf("size a2: %d, %d\n",sizeof(a2),sizeof(*a2));
	printf("sizeof a3: %d, %d,%d\n",sizeof(a3),sizeof(*a3),sizeof(**a3));
	
	return 0;
}
