/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 3, col = 5
Output :
5   4   3   2   1
5   4   3   2   1
5   4   3   2   1


*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = col; j > 0; j--)
            printf("%d   ", j);
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