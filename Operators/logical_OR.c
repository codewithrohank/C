#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int num3 = 30, result;

    /*
    ** OR operator always check both the 2nd operands.
    ** Because OR return FALSE only when both the values
    ** are FALSE.
    */
    result = (num1 > num2) || (num3 > num2);
    printf("(num1 > num2) && (num3 > num2) = %d \n", result);

    /*
    ** Non zero values are considered as true.
    */
    result = num1 || num2;
    printf("num1 && num2 = %d\n", result);
    return 0;
}

