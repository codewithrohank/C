#include <stdio.h>

int main()
{
    char ch = 'A';
    int *ip;   
    char *cp;

    // Address of ch is stored in ip
    ip = &ch;
    printf("*ip = %d\n", *ip);

    // Address of ch is stored in cp
    cp = &ch;
    printf("*cp = %d\n", *cp);

    return 0;
}

