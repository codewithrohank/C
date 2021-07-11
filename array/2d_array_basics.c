#include <stdio.h>
int main()
{
    int abc[3][3] = {{0,1,2},{3,4,5},{6,7,8}};

    // Number of elements in an array
    // = rows * columns
    // In this example = 3 * 3 = 9

    // Size of an integer
    printf("sizeof(int) = %d\n", sizeof(int));
    // Size of an array = (9 * 4)
    printf("sizeof(abc) = %d\n", sizeof(abc));
    //Size of the row in an array = (3 * 4)
    printf("sizeof(abc[0]) = %d\n", sizeof(abc[0]));
    // Size of the element (integer) in an array
    printf("sizeof(abc[0][0]) = %d\n",sizeof(abc[0][0]));

    return 0;
}

