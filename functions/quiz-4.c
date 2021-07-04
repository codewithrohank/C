#include <stdio.h>

int function1()
{
    return 10;
    return 20; 
}
int main()
{
    int a;
    a = function1();
    printf("%d\n", a);
}

