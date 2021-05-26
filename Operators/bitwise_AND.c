#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 25, result = 0;

    printf("num1 = %d, num2 = %d, result = %d\n", 
            num1, num2, result);

    /*
    **      0 0 0 0  1 0 1 0       <---- Binary representation of 10  
    **   &  0 0 0 1  1 0 0 1       <---- Binary representation of 25
    **     -----------------
    **      0 0 0 0  1 0 0 0       <---| bit by bit AND operation.
    **                                 | It will get stored in result.
    */
    result = num1 & num2;

    printf("num1 = %d, num2 = %d, result = %d\n",
            num1, num2, result);
    return 0;
}

