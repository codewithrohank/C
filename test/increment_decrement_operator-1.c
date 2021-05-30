#include <stdio.h>

int main()
{
    int a = 1, b = 2;
    int c;

    c = --b - ++a + ++b - --a;
    printf("%d\n", c);
    //a = 1 1
    //b = 2 2
    //  2 - 1 + 2 - 1
    return 0;
}