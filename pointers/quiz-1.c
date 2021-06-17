#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr;

    ptr = &i;
    *ptr = 65;

    printf("%d %d\n", i, *ptr);

}

