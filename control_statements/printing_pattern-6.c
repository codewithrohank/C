#include <stdio.h>

int main()
{
    int i, j, k;
    char ch = 'E';
    char ch1 = 'A';

    for(i = 0; i <= 4; i++)
    {
        for(j = 4; j >= i; j--)
        {
            printf("%c\t", ch-j);
        }
        for(k = 4; k > i; k--)
        {
            printf("%c\t", ch1+k-i-1);
        }
        printf("\n");
    }
    return 0;
}

