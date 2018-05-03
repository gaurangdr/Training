#include<stdio.h>
int main()
{
	int sel;
	scanf("%d",&sel);
	switch(sel==1)
	{
		default:
			printf("Default\n");
		case 1:
			printf("case 1\n");
		case 2:
			printf("Case 2\n");
			break;
	}
	return 0;
}
