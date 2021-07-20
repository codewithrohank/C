#include <stdio.h>
#include <string.h>
struct abc
{
    int id;
    char name[30];
};
int main()
{
    struct abc s1;
    s1.id = 1;
    strcpy(s1.name, "Rohan");

    printf("ID = %d, NAME = %s\n",
            s1.id, s1.name);
    return 0;
}

