#include<stdio.h>

void decbin(char *ptr, int num);

int  main(void)
{
	int num, i, j;
	char hex[]="abcd5678", bin[33], ctemp[4];
	bin[32] = '\0';
	for (i = 0; i < 8; i++) {
		num = hexdec(hex + i);
		decbin(bin + 4 * i, num);
	}
	for (i = 0; i < 32; i = i + 4) {
		for (j = 0; j < 4; ++j) {
			printf("%c", bin[i + j]);
		}
		printf("\n");
	}
	printf("Hex num string: %s\nBin number string: %s\n",hex,bin);
	return 0;
}

int hexdec(char *ptr)
{
	int a = 'a', f = 'f', a0 = '0',a9 = '9',temp = (int)*ptr;
	if (a <= temp && temp <= f)
                return (10 + temp - 'a');
	else if (a0 <= temp && temp <= a9)
		return temp - a0;
	else
		exit(0);
}

void decbin(char *ptr, int num)
{
	int i;
	char temp[4];
	for (i = 3; i >= 0; --i) {
		if (num % 2 == 0)
			temp[i] = '0';
		else
			temp[i] = '1';
		num = num / 2;
	}
	for (i =0; i < 4; ++i) 
		*(ptr + i) = temp[i];
}
