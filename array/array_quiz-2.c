#include <stdio.h>

int main()
{
    int arr[5] = {23, 12, 51, 94, 5};
    int p;

    p = (arr + 1)[2];
    
    printf("p = %d\n", p);

    return 0;
}

