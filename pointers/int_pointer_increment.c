#include <stdio.h>

int main()
{
    int i = 10;
    int *ptr;

    ptr = &i;

    printf("&i      = %u\n", &i);
    printf("ptr     = %u\n", ptr);
    printf("ptr+1   = %u\n", ptr+1);
    printf("*ptr    = %d\n", *ptr);
    printf("*ptr+1  = %d\n", *ptr+1);
}


