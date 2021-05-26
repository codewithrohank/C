#include <stdio.h>

int main()
{
    char ch = 'a';

    // Printing the size of ch and 'a'
    printf("%d %d\n", sizeof(ch),sizeof('a'));

    //Details for more understanding
    printf("ch=%c, ch=%d\n", ch, ch);
    printf("%d\n", sizeof(97));
    return 0;
}

