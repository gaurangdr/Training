#include<stdio.h>
#include<string.h>

int stod (char *str);
void dtob(char *bin, int num);
void rev_str(char *str);

int main(void)
{
	char str[]="14";
	int num;
	char bin[9] = {'\0'};
	num = stod(str);

	dtob(bin, num);
	rev_str(bin);
	printf("%s\n", bin);
	return 0;
}

int stod (char *str)
{
	int len = strlen(str), mul = 1, sum = 0;
	int l;
	while (len) {
		l = str[len - 1] - '0';
		sum = sum + mul * l;
		mul = mul * 10;
		len--;
	}
	printf("%d\n", sum);
	return sum;
}

void dtob(char *bin, int num)
{
	int i = 0;
	while (num) {
		if (num%2)
			bin[i++] = '1';
		else
			bin[i++] = '0';
		num /= 2;
	}
}

void rev_str(char *p)
{
	char *q = p + strlen(p) - 1;

	for ( ; p < q; p++, q--) {
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
	}
	return;
}
