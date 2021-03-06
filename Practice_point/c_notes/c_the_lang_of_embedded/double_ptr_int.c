#include<stdio.h>
#include<stdlib.h>
int main()
{
	int **p; // p will be in stack

//allocate heap memory for storing pointers
	p = (int **) malloc(sizeof(int*) * 2); //2 heap memory alloated and p store first heap memory location
	
//first heap location that is a single pointer
	*p=(int*)malloc(sizeof(int)); //first heap location store another heap memory location 
	**p=25; //in another heap location store value 25
	printf("value is %d\n",**p);
	
/*eond heap location that is also a pointer */
	*(p+1)=(int*)"India";
	printf("%s\n",*(p+1));
	
/* seond heap location that is also a pointer 
	(p+1)="India";	//error lvalue needed as (p+1=10) and asiign to 10 which is a number not location
	printf("%s\n",(p+1));	
*/
//memory locations
	printf("p is located in stack and its memory location is %x\n",&p);
	printf("p stores heap memory location and that heap location starting address is %x\n",p);
	printf("the heap location %x is store another heap memory location and that another heap memory location is %x\n",p,*p);
	printf("the another heap location %x is storing our value %d\n",*p,**p);
	printf("So by using double pointer, we can handle data more effectively by minimizing needless variables\n\n");
	return 0;
}
