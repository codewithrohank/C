#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 4; i++)
    {
        for(j = 4; j > i; j--)
        {
            printf("*\t", i);
        }
        printf("\n");
    }
    return 0;
}

