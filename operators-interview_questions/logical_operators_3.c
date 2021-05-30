#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 10, num3 = 20;
    int result = 0;

    printf("num1 = %d num2 = %d num3 = %d result = %d\n",
            num1, num2, num3, result);

    result = num1 && (num2 = 0) || (num3 = 90);

    printf("num1 = %d num2 = %d num3 = %d result = %d\n",
            num1, num2, num3, result);
    return 0;
}

