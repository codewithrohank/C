#include <stdio.h>

int main()
{
    int num, pos;

    printf("Enter the number...\n");
    scanf("%d", &num);

    printf("Enter the position which you want to set\n");
    scanf("%d", &pos);

    printf("Before setting the bit: num = %d\n", num);
    /* e.g. num = 27 and pos = 2
    **      0 0 0 0  0 0 0 1    Binary representation of 1 (step-1)
    **      0 0 0 0  0 1 0 0    1 left shifted by pos(2) (step-2)
    **
    **      num | (1 << pos) ===>>
    **      0 0 0 1  1 0 1 1    Binary representation of 27 (step-3)
    **   |  0 0 0 0  0 1 0 0    1 left shifted by pos 2 (from step-2)
    **     -------------------
    **      0 0 0 1  1 1 1 1    This is binary representation of 31
    */
    num = num | (1 << pos);

    printf("After setting the bit: num = %d\n", num);    
    return 0;
}

