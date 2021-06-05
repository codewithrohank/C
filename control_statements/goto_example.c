#include <stdio.h>

int main()
{
    int num = 5;

print:
    printf("%d", num);
    num--;

    if(num > 0)
        goto print;

    return 0;
}


