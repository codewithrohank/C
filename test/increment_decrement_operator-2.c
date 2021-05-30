#include <stdio.h>

int main()
{
    int i = 19, j = 29, k;

    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    //i =  19 - 19 + 19 + 19
    //j =  + 29 - 29 - 29 - 29 
    printf("%d\n", k);
    // k = 19 - 19 + 29 - 29 + 19 - 29 + 19 - 29
    // k = -20
    return 0;
}