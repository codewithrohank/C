#include <stdio.h>

int main()
{
    int num1 = 10, num2 = 10;
    
    if (num1 < num2)
    {
        printf("%d is smaller than %d\n", num1, num2);
    } 
    else if (num1 > num2)
    {
        printf("%d is bigger than %d\n", num1, num2);
    }
    else
    {
        printf("Both the numbers are same\n");
    }

    return 0;
}

