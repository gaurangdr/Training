#include<stdio.h>
int main()
{
	unsigned int num = 0x07, ans = 0, last = 0;

	int i = 0;

	for (i = 0; i < 32; i++)
		ans = (ans << 1) | ((num >> i) & 0x01);
	printf("ans: %x\n%d", ans,i);
	return 0;
}
