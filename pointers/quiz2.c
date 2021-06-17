#include <stdio.h>

int main()
{
    char i = 10;
    char *ptr;

    ptr = &i;
    *ptr = 65;

    printf("%c %c\n", i, *ptr);

}

