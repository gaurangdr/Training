#include<stdio.h>
void print_fun(void (*fun)(void))
{
        fun();
}
void fun1()
{
        printf("This is fun1\n");
}
void fun2()
{
        printf("This is fun2\n");
}
int main()
{
        print_fun(fun1);
	print_fun(fun2);
        return 0;
}

