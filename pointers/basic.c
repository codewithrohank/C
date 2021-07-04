#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr;   // Integet Pointer

    // Address of i is stored in ptr
    ptr = &i;

    printf("   i = %d\n", i);
    printf("*ptr = %d\n", *ptr);
    printf(" ptr = %d\n", ptr);
    printf("  &i = %d\n", &i);

    return 0;
}

