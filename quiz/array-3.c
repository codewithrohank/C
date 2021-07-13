#include <stdio.h>
int main()
{
    char p;
    char abc[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    p = (abc+1)[5];
    printf("%d", p);

    return 0;
}

