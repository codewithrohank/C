#include <stdio.h>

char* function1(char *ptr)
{
    ptr += 3;
    return ptr; 
}
int main()
{
    char *x = "ABCDEF", *y;
    y = function1(x);
    printf("%s\n", y);
}

