#include <stdio.h>

int function1(int j)
{
    int i;
    i = j *2;
    printf("In arg-return function\n");
    return i;
}

int main()
{
    int j = 10, return_value;

    printf("In main function\n");
    return_value = function1(j);
    printf("In main func: %d\n", return_value);
    
    return 0;
}

