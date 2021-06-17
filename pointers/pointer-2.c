#include <stdio.h>

int main()
{
    int i = 10, j = 20;
    int *ptr;   // Integet Pointer

    // Address of i is stored in ptr
    ptr = &i;
    printf("*ptr = %d\n", *ptr);

    // Address of j is stored in ptr
    ptr = &j;
    printf("*ptr = %d\n", *ptr);

    return 0;
}

