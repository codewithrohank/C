#include <stdio.h>

int main()
{
    int num = 1;

    if (num)
    {
        printf("%d", num--);
    
        if(num)
            printf("%d", ++num);
    }

}
