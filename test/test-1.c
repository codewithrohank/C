#include <stdio.h>
#define PRODUCT(x) (x*x)
int main()
{
    int i = 3, j, k, l;

    j = PRODUCT(i +1);
    k = PRODUCT(i++);
    l = PRODUCT(++i);

    printf("%d %d %d %d\n", i, j, k, l);
    return 0;
}