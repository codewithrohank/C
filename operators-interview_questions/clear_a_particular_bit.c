#include <stdio.h>

int main()
{
    int num, pos;

    printf("Enter the number...\n");
    scanf("%d", &num);

    printf("Enter the position which you want to clear\n");
    scanf("%d", &pos);

    printf("Before clearing the bit: num = %d\n", num);
    /* e.g. num = 27 and pos = 3
    **      0 0 0 0  0 0 0 1    Binary representation of 1 [step-1]
    **      0 0 0 0  1 0 0 0    1 left shifted by pos(3) [step-2]
    **      1 1 1 1  0 1 1 1    Bitwise complement of setp-2 [step-3]
    **
    **      num & ~(1 << pos) ===>>
    **      0 0 0 1  1 0 1 1    Binary representation of num (27) [step-4]
    **   &  1 1 1 1  0 1 1 1    complement of 1 left shifted by pos (3) [from step-3]
    **     -------------------
    **      0 0 0 1  0 0 1 1    This is binary representation of 19
    */
    num = num & ~(1 << pos);

    printf("After clearing the bit: num = %d\n", num);
    return 0;
}

