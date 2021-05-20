#include <stdio.h>

int main()
{
    int i;
    char *cp;

    i = 10;
    /*
    ** Character pointer can read only 1 byte
    ** from the 4 bytes of the integer.
    */
    cp = (char*) &i;
    
    /*
    ** As character pointer points at a lowest
    ** memory location, it will read 10 if LSB
    ** is stored at lowest memory location and
    ** will read 0 if LSB is stored at highest
    ** memory location.
    */
    if (*cp == 10)
        printf("This is Little Endian System\n");
    else
        printf("This is Big Endian System\n");

    return 0;   
}