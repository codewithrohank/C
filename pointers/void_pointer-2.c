#include <stdio.h>

int main()
{
    int i = 10;
    
    void *ptr;

    ptr = &i;
    printf("%d\n", *ptr);

    return 0;
}

