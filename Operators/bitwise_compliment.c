#include <stdio.h>

int main()
{
    int num1 = 10, result = 0;

    printf("num1 = %d, result = %d\n", num1, result);
    /*
    **  ~   0 0 0 0  1 0 1 0       <---- Binary representation of 10  
    **     -----------------
    **      1 1 1 1  0 1 0 1       <---| bit by bit XOR operation on 10.
    **                                 | It will get stored in result.
    **
    **  As we are using signed integer, so we need to read this as a 
    **  negative number.
    **  So, Using the 2's complement method.
    **      0 0 0 0  1 0 1 0       <---- Invert each bit of above output.   
    **                     1       <---- Add 1 to the LSB.
    **     ------------------
    **      0 0 0 0  1 0 1 1       <---- This is a binary representation of 11
    **  Now add - sign to 11, so output will be -11  
    */
    result = ~ num1;

    printf("num1 = %d, result = %d\n", num1, result);
    return 0;
}

