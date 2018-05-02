#include<stdio.h>
int main()
{
	struct stud1	//total size 16
	{
		int a;	//4 bytes
		int b;	//4 bytes
		char c;	//4 bytes
		int d;	//4 bytes
	};

        struct stud2     //total size 16
        {
                int a	:	32;	//4 bytes
//                int b	:	1;	//4 bytes
//               char c	:	1;	//4 bytes
//                int d	:	1;	//4 bytes
        };
	struct stud1 s1;
	struct stud2 s2;
	printf("Size is strut s1:\t%d\n",sizeof(s1));
	printf("Size of int:\t%d\n",sizeof(int));
	printf("Size is strut s2:\t%d\n",sizeof(s2));
//	printf("Size of int of s2:\t%d\n",sizeof(s2.a));
	return 0;
}
