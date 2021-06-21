#include <stdio.h>

int main()
{
    int a = 1, b;

    //a++;

    b = ++a + a + ++a;

    printf("b=%d \n", b);

    return 0;
}