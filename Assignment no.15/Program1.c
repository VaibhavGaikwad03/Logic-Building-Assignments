/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 4, col = 4
Output :
1   2   3   4
5   6   7   8
9   1   2   3
4   5   6   7
*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;
    int num = 1;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (num == 10)
                num = 1;
            printf("%d\t", num++);
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