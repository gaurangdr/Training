#include<stdio.h>
typedef void (*funptr) (int);
void print_fun(funptr fun(int a))
{
        fun(5);
}
void fun1(int a)
{
        printf("This is fun1: %d\n",a);
}
void fun2(int a)
{
        printf("This is fun2: %d\n",a);
}
int main()
{
        print_fun(fun1(int));
	print_fun(fun2(int));
        return 0;
}

