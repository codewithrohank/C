/*
**  Code With Rohan : https://www.instagram.com/codewithrohank/
**  
**  Carry forward addition using 2D Array.
**  Addition will be stored in the last row.
**  e.g. for 3x5 Array:
**          Input = 
**                  1  2  3  4  5
**                  6  8  9  7  6
**          Output = 
**                  1  2  3  4  5
**                  6  8  9  7  6
**                  8  1  3  2  1   
**
**  Note : Carry after last addition will be ignored here.
**         If you want to accomodate the carry in the last addition, 
**         then just add another condition check for 
**         (j == rows) and then add using "arr[j-1][i] = sum;"   
*/

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