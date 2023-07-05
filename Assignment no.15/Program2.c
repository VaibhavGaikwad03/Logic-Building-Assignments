/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 4, col = 4
Output :
2   4   6   8
1   3   5   7
2   4   6   8
1   3   5   7
*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;
    int num;

    for (i = 0; i < row; i++)
    {
        if (i % 2 == 0)
            num = 2;
        else
            num = 1;

        for (j = 0; j < col; j++, num+=2)
            printf("%d\t", num);
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