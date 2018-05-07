#include<stdio.h>
#define MAX(a, b, c) ((a > b) ? ((a > c) ? (a) : (c)) : ((b > c) ? (b) : (c)))
#define MAX2(a, b, c) (((a > b) && (a > c)) ? (a) : (b > c ? (b) : (c) ))
int main(void)
{
	int a = 100, b = 200, c = 300;
	printf("MAX: %d\n", MAX(a, b, c));
//	printf("MAX: %d\n", MAX(a, c, b));

	int p, q, r, s, m;

	p = 1000;
	q = 200;
	r = 30;
	s = 4;

	m = ((p > q) && (p > r) && (p > s)) ? p : ((q > r) && (q > s) ? q : (r > s ? r : s));
	printf("MAX: %d\n", m);

	return 0;
}
