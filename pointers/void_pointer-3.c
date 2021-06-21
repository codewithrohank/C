#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int *x;
    
    /*
    ** Syntax of malloc :
    ** void *malloc(size_t size);
    */

    x = (int *) malloc(sizeof(int));

    return 0;
}

