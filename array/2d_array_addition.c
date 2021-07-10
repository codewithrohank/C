#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add(int rows, int columns, int **arr);
void print(int rows, int columns, int **arr);

int main()
{
    int i, j, rows, columns;
    int **arr;

    printf("Enter Number of rows\n");
    scanf("%d", &rows);
    printf("Enter Number of columns\n");
    scanf("%d", &columns);

    arr = (int **)calloc(rows, sizeof(int *));
    for (i=0; i<rows; i++)
         arr[i] = (int *)calloc(columns, sizeof(int));

    for(int i =0; i < rows-1; i++)
        for(int j = 0; j < columns; j++)
        {
            printf("Enter array[%d][%d] = \n", i, j);
            scanf("%d", &arr[i][j]);
        }

    print(rows, columns, arr);

    add(rows, columns, arr);

    print(rows, columns, arr);
    return 0;
}

void add(int rows, int columns, int **arr)
{
    int sum = 0;
    static int carry;
    int i, j;

    for(i =columns-1; i >= 0; i--)
    {
        for(j = 0; j < rows; j++)
        {
            sum += arr[j][i];
        }
        printf("sum=%d, carry=%d\n", sum, carry);
        sum += carry;
        carry=0;

        if (sum >= 10)
        {
            arr[j-1][i] = sum%10;
            carry = sum/10;
        }
        else
            arr[j-1][i] = sum;

        sum = 0;
    }
}

void print(int rows, int columns, int **arr)
{
    printf("Array [%d][%d]:\n", rows, columns);
    for(int i =0; i < rows; i++)
    {
        for(int j = 0; j < columns; j++)
        {
            printf("%d  ", arr[i][j]);
        }
        printf("\n");
    }

}