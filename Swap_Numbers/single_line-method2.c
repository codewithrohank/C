#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Enter 2 Numbers : \n");
    scanf("%d %d", &num1, &num2);
    printf("Before Swap : num1=%d num2=%d\n", num1, num2);

    // Swapping Logic
    num1 = num1 * num2 / (num2 = num1);

    printf("After Swap  : num1=%d num2=%d\n", num1, num2);
    return 0;
}

