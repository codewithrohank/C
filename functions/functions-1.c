#include <stdio.h>

void function1()
{
    printf("In void-void function\n");
    return;
}

int main()
{
    printf("In main function\n");
    function1();
    return 0;
}

