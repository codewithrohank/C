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

    // Store 100 at the address of j
    *ptr = 100;
    printf("  *j = %d\n", j);

    return 0;
}

