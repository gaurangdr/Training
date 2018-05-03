#include<stdio.h>
int main(void)
{
	int a = 0x11223310, i = 2;
	int b = 0;

	b = 1 << 1;
	printf("%x\n", b); /* 1 */


	/* set i bit */
	a |= (1 << i);

	printf("%x\n", a); /* 2 */
	a =0x11223380;

	/* reset i bit */
	a &= ~(1 << i);

	printf("%x\n", a); /* 3 */
	a =0x11223310;

	/* toggle i bit */
	a ^= (1 << i);

	printf("%x\n", a); /* 4 */
	a = 0xffffffff;
	a = 0;

	/* get i bit */
//	a = ((a &  (1 << i)) > 0); // works
//	a = (a & (1 << i)) && 1; // other method works
//	a = ((a &  (1 << i)) == 1); // not work as 0x000080 == 0x000001
	a = !((a &  (1 << i)) == 0); // works
		
	printf("%x\n", a); /* 5 */

	return 0;
}
