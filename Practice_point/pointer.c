#include <stdio.h>
#include <stdlib.h>

int main(void)
{
//	int arr[4][10][5];
	int (*parr)[10][5] = NULL;

	parr++;
	printf("%ld\n", parr);

//	parr = (int (*)[10][5])malloc(4*10*5*sizeof(int));
	parr = malloc(4 * 10 * 5 * sizeof(int));

	int diff = &parr[1] - parr;

	printf("%ld\n", diff);
	int i, j, k, num = 1;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 10; j++) {
			for (k = 0; k < 5; k++) {
				parr[i][j][k] = num++;
			}
		}
	}

//	parr = arr;
/*
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 10; j++) {
			for (k = 0; k < 5; k++) {
//				printf("%d ", *(*(*(parr + i) + j) + k));
				printf("%d ", parr[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
*/	return 0;
}
