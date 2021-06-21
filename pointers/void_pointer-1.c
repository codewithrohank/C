#include <stdio.h>

int main()
{
    int i = 10;
    char ch = 'A';
    void *ptr;

    ptr = &i;
    printf("%d\n", *(int *)ptr);

    ptr = &ch;
    printf("%c\n", *(char *)ptr);

    return 0;
}

