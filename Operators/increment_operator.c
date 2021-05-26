#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;

    /*
    ** Pre-increment operator will 
    ** increment the value immediately.
    */
    printf("++num1 = %d\n", ++num1);
    /*
    ** Post-increment will increment 
    ** the value after execution.
    */
    printf("num2++ = %d\n", num2++);
    /*
    ** Updated values of num1 and num2
    ** after execution of above statements
    */
    printf("num1 = %d num2 = %d\n", num1, num2);
    return 0;
}

