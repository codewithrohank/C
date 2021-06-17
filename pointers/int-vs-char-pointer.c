#include <stdio.h>

int main()
{
    int i = 300;
    int *ip;   
    char *cp;

    // Address of i is stored in ip
    ip = &i;
    printf("*ip = %d\n", *ip);

    // Address of i is stored in cp
    cp = &i;
    printf("*cp = %d\n", *cp);

    return 0;
}

