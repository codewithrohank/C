#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int result;

    /*
    ** Check the condition and
    ** if it is TRUE then take the 1st value
    ** else take the 2nd value
    ** and store that value in result.
    */
    result = (num1 < num2) ? 1 : 0;
    printf("1. (num1 < num2) = %d\n", result);

    result = (num1 > num2) ? 1 : 0;
    printf("2. (num1 > num2) = %d\n", result);

    return 0;
}
