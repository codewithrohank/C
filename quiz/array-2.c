#include <stdio.h>
int main()
{
    int size=4;
    int a[size];
    a[0]=5;a[3]=6;
    a[2]=7;a[1]=8;
    printf("%d %d", *(a+2), a[1]);

    return 0;
}

