#include<stdio.h>
int main()
{
	int *a,c;
	void *b;
	long long ll;
	long l;
	printf("long long %d, long %d\n",sizeof(ll),sizeof(l));
	printf("sizeof variables/types\npointer int %d\npointer void %d\nvlaue void %d\nvoid type %d\nint value c %d\nvoid address %d\n",sizeof(a),sizeof(b),sizeof(*b),sizeof(void),sizeof(*a),sizeof(void));
	printf("size : long %d, long long %d, int %d\n",sizeof(long),sizeof(long long),sizeof(int));
	printf("Null size%d, null value %x\n",sizeof(NULL),NULL);
	int *pi=NULL;
//	*pi=9;
	return 0;
}
