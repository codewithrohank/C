#include <stdio.h>

int main()
{
    int i = 11;
    int j = --(i++);

    printf("%d\n", j);

    return 0;
}

