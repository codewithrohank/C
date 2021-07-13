#include <stdio.h>
int main()
{
    int abc[] = {10,20,30}, *p;
    p = &abc[0];
    int i=0;
    while(i<2)
    {
        printf("%d ", *p++);
        p++;
        i++;
    }
    return 0;
}

