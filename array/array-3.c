#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30};
    int i;

    /*
    ** Rest of the elements of
    ** partially initialized
    ** array will be 0.
    */
    for(i = 0; i < 5; i++)
    {
        printf("arr[%d] = %d\n", 
                    i, arr[i]);
    }
    return 0;
}

