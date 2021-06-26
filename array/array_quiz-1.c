#include <stdio.h>

int main()
{
    int arr[5] = {2, 1, 3, 8, 5};
    int i, j, k;

    i = ++arr[0];
    j = arr[1]++;
    k = arr[i++];

    printf("i = %d, j = %d, k = %d\n", 
            i, j, k);

    return 0;
}

