#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int result = 0;

    printf("num1 = %d num2 = %d result = %d\n",
            num1, num2, result);
    /*
    ** If first operand is TRUE then OR operator
    ** doesn't check/process the second operand.
    ** Here num1 is TRUE so (num2 = 30) will NOT 
    ** be processed and num2 ramains 20 only.
    */
    result = num1 || (num2 = 30);

    printf("num1 = %d num2 = %d result = %d\n",
            num1, num2, result);
    return 0;
}

