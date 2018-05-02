#include<stdio.h>
int main(void)
{
	char s [] = "gaurang";
	char *p,*q;
for (p=s, q=0; p>q; q ? (*p ^= *q, *q ^= *p,*p-- ^= *q++) : (!*++p ? q=s,*--p:0));
	printf("%s\n", s);
	return 0;
}
