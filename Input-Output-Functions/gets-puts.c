#include <stdio.h>

int main()
{

    /* Array of 20 characters */
    char str[20];

    printf("Enter a string\n");
    /*
    ** gets() will wait for input.
    ** Enter a string as input and
    ** that will be stored in array 'str'.
    */
    gets(str);

    printf("You have entered below String:\n");
    /*
    ** puts() will display the string
    ** stored in 'ch'.
    */
    puts(str);
    return 0; 
}