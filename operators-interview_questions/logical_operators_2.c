#include <stdio.h>

int main()
{
    int num1 = 1, num2 = 10, num3 = 20;
    int result = 0;

    printf("num1 = %d num2 = %d num3 = %d result = %d\n",
            num1, num2, num3, result);
    /*
    ** If first operand is TRUE then OR operator
    ** doesn't check/process the second operand.
    ** Here num1 is TRUE hence next part of 
    ** the statement will NOT be processed and
    ** hence (num2 = 0) and (num3 = 90) will
    ** NOT be executed.
    */
    result = num1 || (num2 = 0) && (num3 = 90);

    printf("num1 = %d num2 = %d num3 = %d result = %d\n",
            num1, num2, num3, result);
    return 0;
}

