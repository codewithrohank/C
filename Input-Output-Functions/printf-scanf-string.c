#include <stdio.h>

int main()
{
    /* Array of 30 character */
    char str1[30];
    char str2[30];

    printf("Enter first string with spaces :\n");
    scanf("%[^\n]", str1);

    printf("Enter second string with spaces :\n");
    scanf("%s", str2);

    /*
    ** printf() will display the string
    ** stored in 'str1' and .
    */
    printf("First string entered : %s\n", str1);
    printf("Second string entered : %s\n", str2);

    return 0; 
}