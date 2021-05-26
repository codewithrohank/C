#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 20;
    int result;

    /*
    ** NOT operator just reverse the input.
    ** TRUE becomes FALSE.
    ** FALSE becomes TRUE.
    */
    result = !(num1 > num2);
    printf("!(num1 > num2) = %d \n", result);

    result = !(num1 < num2);
    printf("!(num1 < num2) = %d\n", result);
    return 0;
}

