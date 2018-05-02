#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool a = true;
    printf("%zu\n", sizeof(bool));  // Ok
    printf("%zu\n", sizeof(a));     //
    printf("%zu\n", sizeof(a ? true : false)); 
    return 0;
}
