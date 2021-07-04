#include <stdio.h>

int function1(int i)
{
    return(i++);
}
int main()
{
    int i = function1(10);
    printf("%d\n", ++i);

    return 0;
}

