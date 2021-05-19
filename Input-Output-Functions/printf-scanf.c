#include <stdio.h>

int main()
{
    /* Declare an integer */
    int i;

    printf("Enter a Number :\n");
    /*
    ** scanf() will wait for input. Enter a number
    ** as input and that will be stored in 'i'.
    ** NOTE : scanf needs an address of 'i' to 
    ** store the value on that address.
    */
    scanf("%d", &i);

    /*
    ** printf() will display the number
    ** stored in 'i'.
    */
    printf("You have entered the Number :\n%d\n", i);

    return 0; 
}


