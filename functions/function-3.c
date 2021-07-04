#include <stdio.h>

int function1()
{
    int i = 10;
    printf("In void-return function\n");
    return i;
}

int main()
{
    int j;
    printf("In main function\n");
    j = function1();
    printf("In main func: %d\n", j);
    return 0;
}

