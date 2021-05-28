#include <stdio.h>

int main()
{
    int num1 = 100, num2 = 0;
    int result1, result2;

    // Logical AND
    result1 = num1 && num2;
    
    // Logical OR
    result2 = num1 || num2;

    printf("%d %d\n", result1, result2);
    return 0;
}

