#include <stdio.h>

int main()
{
    int i = 0;

    printf("Code with Rohan\n");

label1:
    printf("Like - %d\n", i);
    i++;

    if(i < 3)
        goto label1;

    return 0;
}

