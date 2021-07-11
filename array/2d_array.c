#include <stdio.h>
int main()
{
    int abc[3][3] = {{0,1,2},{3,4,5},{6,7,8}};
    int rows, columns;

    rows = sizeof(abc) / sizeof(abc[0]);
    columns = sizeof(abc[0])/sizeof(abc[0][0]);

    printf("abc[%d][%d] =\n", rows, columns);
    for(int i =0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d  ", abc[i][j]);
        }
        printf("\n");
    }
    return 0;
}

