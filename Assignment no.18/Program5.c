/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 5, col = 5
Output :
1   2   3   4   5   
1   2           5
1       3       5
1           4   5
1   2   3   4   5

*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;

    if (row != col)
        return;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i == 1 || i == row || j == 1 || j == col || i == j)
                printf("%d   ", j);
            else
                printf("    ");
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