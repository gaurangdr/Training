#include<stdio.h>
#include<semaphore.h>
int main(void)
{
	int sel;
	printf("Enter sel:");
	scanf("%d", &sel);
	switch (sel) {
//	default:
		printf("Good day\n");
//		break;
	case 1:
		printf("Case 1\n");
		int i = 10;
		printf("i = %d\n", i);
		break;
	case 2:
		printf("Case 2\n");
		break;
	default:
		printf("Good day\n");
		break;
	}
	return 0;
}
	
