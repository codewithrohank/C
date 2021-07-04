#include <stdio.h>
int i;  /* Global Variable */

int function1()
{
    static int x; /* Static Variable */
    x++;
    return x;
}
int main()
{
    int j;  /* Auto/Local Variable */
    register int k; /* Register Variable */

    j = function1();
    printf("First: i = %d, j = %d k = %d\n", 
            i, j, k);
    j = function1();
    printf("Second: i = %d, j = %d k = %d\n", 
            i, j, k);

    return 0;
}

