#include <stdio.h>

int main()
{
    int num = 30;
    
    switch (num)
    {
        case 10: printf("10");
                break;
        case 20: printf("20");
                break;
        case 30: printf("30");
        default: printf("40\n");
                break;
    }
    return 0;
}

