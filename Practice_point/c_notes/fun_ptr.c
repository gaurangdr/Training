#include<stdio.h>

void print_fun(void (*fun)(void))
{
        fun();
}

void fun1(void *a, int b)
{
        printf("This is fun1\n");
}

void fun2(void)
{
        printf("This is fun2\n");
}

typedef void (*fun_ptr)(void);
fun_ptr fun_p[2] = {fun1, fun2}; 
int main(void)
{
	print_fun(fun1);
	print_fun(fun2);
	print_fun(fun_p[0]);
    return 0;
}

