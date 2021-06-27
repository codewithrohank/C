#include <stdio.h>

int main()
{
    char arr1[] = "abcd";
    char arr2[] = "abcd";

    printf("%u, %u\n", arr1, arr2);
    printf("%u, %u\n", &arr1, &arr2);
    printf("%s, %s\n", arr1, arr2);
    printf("%u, %u\n", sizeof(arr1), sizeof(arr2));

    if (arr1 == arr2)
        printf("Equal\n");
    else
        printf("Unequal\n");
    return 0;
}

