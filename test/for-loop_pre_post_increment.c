#include <stdio.h>

int main()
{
    int i;

    for(i =0; i< 3; i++)
        printf("Test++\n");
    
    for(i =0; i< 3; ++i)
        printf("++Test\n");

    return 0;
}