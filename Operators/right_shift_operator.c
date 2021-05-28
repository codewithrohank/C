#include <stdio.h>

int main()
{
    int num = 10, shift = 2, result = 0;

    printf("num = %d, shift = %d, result = %d\n", 
            num, shift, result);

    /*
    **      0 0 0 0  1 0 1 0       <---- Binary representation of 10  
    **      0 0 0 0  0 1 0 1       <---- Right shift by 1 (Step-1)
    **      0 0 0 0  0 0 1 0       <---- Again Right shift by 1 (Step-2)
    **     
    **      So after Right shifting 2 times, 10 becomes 2 (See step 2 above).
    **      Remember that value inside num doesn't change. Only the calculated
    **      value gets stored into the result.
    */
    result = num >> shift;

    printf("num = %d, shift = %d, result = %d\n", 
            num, shift, result);
    return 0;
}

