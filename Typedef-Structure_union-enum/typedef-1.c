#include <stdio.h>
typedef int age;
typedef char alphabet;

int main()
{
    age clang;
    alphabet ch;

    printf("Enter your Age\n");
    scanf("%d", &clang);

    printf("Enter your favourite character\n");
    scanf(" %c", &ch);

    printf("Age = %d, character = %c\n", clang, ch);
    return 0;
}

