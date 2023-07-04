/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 3, col = 4
Output :
1   1   1   1
2   2   2   2
3   3   3   3
4   4   4   4

*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;

    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
            printf("%d   ", i);
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