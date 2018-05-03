#include<stdio.h>
extern int data;
int main()
{
	printf("Calling to input function\n");
	data = in_data();
	printf("Data is %d \n",data);
	return 0;
}
