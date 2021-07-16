#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, *p;

    // Allocate the memory for 3 integers
    p = (int *) malloc(sizeof(int) * 3);

    printf("Enter the Numbers:\n");
    for(i = 0; i < 3; i++)
        scanf("%d", (p+i));

    printf("You have entered below numbers:\n");
    for(i = 0; i < 3; i++)
        printf("%d\n", *(p+i));

    free(p);
    printf("Allocated memory has been freed\n");
    return 0;
}

