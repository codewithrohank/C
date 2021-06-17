#include <stdio.h>

int main()
{
    char i = 100;
    char *ptr;

    ptr = &i;
    *ptr += 5;

    printf("%c %c\n", i, *ptr);

}

