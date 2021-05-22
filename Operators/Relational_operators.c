#include <stdio.h>

int main()
{
    int num1 = 20, num2 = 10, out;

    out = num1 < num2;
    printf("num1 < num2 = %d\n", out);

    out = num1 > num2;
    printf("num1 > num2 = %d\n", out);

    out = num1 <= num2;
    printf("num1 <= num2 = %d\n", out);

    out = num1 >= num2;
    printf("num1 >= num2 = %d\n", out);

    out = num1 == num2;
    printf("num1 == num2 = %d\n", out);

    out = num1 != num2;
    printf("num1 != num2 = %d\n", out);
    return 0;
}

