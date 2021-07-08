#include <stdio.h>
int main()
{
    char *p = NULL;
    char *q = 0;
    if (p)
        printf("p");
    if (q)
        printf("q");
    else
        printf("nullq");
    return 0;
}

