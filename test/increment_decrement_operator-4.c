#include <stdio.h>

int main()
{
    int m = 0, n = 0;

    int p = --m * --n * n-- * m--;
    
    printf("%d\n", p);
    // 1
    return 0;
}