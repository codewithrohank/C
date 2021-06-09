#include <stdio.h>

int main()
{
    int i, j;

    for(i = 0; i < 3; i++)
    {
        printf("First loop : i = %d\n", i);
        for(j = 0; j < 3; j++)
        {
            printf("Second loop: j = %d\n", j);
        }
    }
    return 0;
}

