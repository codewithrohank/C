#include <stdio.h>

int main()
{
    int num1 = 10, num2;

    num2 = num1;
    printf("1. num2 = %d\n", num2);

    num2 += num1;
    printf("2. num2 = %d\n", num2);

    num2 -= num1;
    printf("3. num2 = %d\n", num2);

    num2 *= num1;
    printf("4. num2 = %d\n", num2);

    num2 /= num1;
    printf("5. num2 = %d\n", num2);

    num2 %= num1;
    printf("6. num2 = %d\n", num2);
    return 0;
}

