#include<stdio.h>
enum {I, O=-1, IM};
int main(void)
{
	static const char *gpio[] = {[I] = "IN", "OUT", "IMPEDENCE"};
//	DIR a = IM;
	printf("%s\n", gpio[I]);
	printf("%d %d %d\n", I, O, IM);
	return 0;
}
