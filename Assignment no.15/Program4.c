/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 4, col = 4
Output :
1   2   3   4
-1  -2  -3  -4
1   2   3   4
-1  -2  -3  -4
*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 1; j <= col; j++)
                printf("%d\t", j);
        }
        else
        {
            for (j = 1; j <= col; j++)
                printf("%d\t", -j);
        }
        printf("\n");
    }
}

int main(void)
{
    int row, col;

    printf("Enter rows : ");
    scanf("%d", &row);

    printf("Enter columns : ");
    scanf("%d", &col);

    pattern(row, col);

    return 0;
}