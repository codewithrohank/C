#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int num3 = 30, result;

    /*
    ** If the first operand is zero, then AND operator
    ** doesn't even check the 2nd operand.
    ** Because AND needs both the values as TRUE.
    */
    result = (num1 > num2) && (num3 > num2);
    printf("(num1 > num2) && (num3 > num2) = %d \n", result);

    /*
    ** Non zero values are considered as true.
    */
    result = num1 && num2;
    printf("num1 && num2 = %d\n", result);
    return 0;
}

