#include <stdio.h>

void function1(int i)
{
    printf("In arg-void func: %d\n", i);
    return;
}

int main()
{
    int i = 10;
    printf("In main function\n");
    function1(i);
    return 0;
}

