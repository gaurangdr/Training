#include<stdio.h>
#include<time.h>
int main()
{
	int a;
	time_t when;
	time(&when);
	printf("%s \n",ctime(&when));
	printf("%ld \n",when);
	sleep(5);
	time(&when);
	printf("%s \n",ctime(&when));
	printf("%ld \n",when);
	return 0;
}
