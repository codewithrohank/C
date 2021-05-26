#include <stdio.h>

int main()
{
    int i = 10, j = 20, k;

    /*
    ** Value of i increments by 1 immediately and
    ** hence i becomes 11.
    ** Value of j increments by 1 BUT after the
    ** execution of a statement So, k = 11 + 20
    ** k becomes 31.
    */
    k = ++i + j++;

    /*
    ** After above statement execution, the value
    ** of j becomes 21.
    */

    printf("%d %d %d\n", i, j, k);
    /* 
    ** Therefore, output is 11 21 31
    */
    return 0;
}

