#include <stdio.h>

int main()
{
    int num;

    printf("Enter the Number :\n");
    scanf("%d", &num);

    switch (num)
    {
        case 1: printf("You have entered 1\n");
                break;
        case 2: printf("You have entered 2\n");
                break;
        case 3: printf("You have entered 3\n");
                break;
        default: printf("Number doesn't match any case\n");
                break;
    }
    return 0;
}

