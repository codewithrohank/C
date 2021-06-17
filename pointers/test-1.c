#include <stdio.h>

int main()
{
    int i = 10;
    char ch = 'a';
    int *ip, *ip1;  // Integet Pointer
    char *cp;

    // Address of i is stored in ptr
    ip = (int *) &ch;
    printf("*ip = %d\n", *ip);

    ip1 = (int *) cp;
    // Address of j is stored in ptr
    cp = (char *) &i;
    printf("*cp = %d\n", *cp);

    return 0;
}

