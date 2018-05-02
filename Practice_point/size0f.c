#include <stdio.h>

int fun(char *a){
    printf("fun: %lu\n",sizeof(a));
    return 1;
}

int main(void){
    char a[20];
	int *ptr = a;
    printf("main: %lu\n",sizeof(fun(a)));
    printf("main: %lu\n",sizeof(fun));
    return 0;
}

