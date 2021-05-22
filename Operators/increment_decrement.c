#include <stdio.h>
int main()
{
    int num1 = 10, num2 = 20;

    /*
    ** Pre-increment operator will 
    ** incement the value immediately.
    */
    printf("++num1 = %d\n", ++num1);
    printf("--num2 = %d\n", --num2);
    /*
    ** Post-increment will increment 
    ** the value after execution.
    */
    printf("num1++ = %d\n", num1++);
    printf("num2-- = %d\n", num2--);
    
    // Updated values of num1 and num2
    // after execution of above statements
    printf("num1 = %d num2 = %d\n", num1, num2);
    return 0;
}

