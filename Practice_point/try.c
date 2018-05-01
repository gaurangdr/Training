#include<stdio.h>
int main(void)
{
	struct buffer {
		int data;
	};
	struct buffer buf[2];
	int i = 0;
	buf[i++].data = 10;
	return 0;
}
	
