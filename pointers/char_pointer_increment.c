#include <stdio.h>

int main()
{
    char ch = 'A';
    char *ptr;

    ptr = &ch;

    printf("&ch     = %u\n", &ch);
    printf("ptr     = %u\n", ptr);
    printf("ptr+1   = %u\n", ptr+1);
    printf("*ptr    = %c\n", *ptr);
    printf("*ptr+1  = %c\n", *ptr+1);
}

