#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;

    /*
    ** Pre-decrement operator will 
    ** decrement the value immediately.
    */
    printf("--num1 = %d\n", --num1);
    /*
    ** Post-decrement will decrement 
    ** the value after execution.
    */
    printf("num2-- = %d\n", num2--);
    /*
    ** Updated values of num1 and num2
    ** after execution of above statements
    */
    printf("num1 = %d num2 = %d\n", num1, num2);
    return 0;
}

