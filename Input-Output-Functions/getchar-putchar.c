#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a Character\n");
    /*
    ** getchar() will wait for input.
    ** Enter a character as input and
    ** that will be stored in 'ch'.
    */
    ch = getchar();

    printf("You have entered below Character:\n");
    /*
    ** putchar() will display the character
    ** stored in 'ch'.
    */
    putchar(ch);
    return 0;
}