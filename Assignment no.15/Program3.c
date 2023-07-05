/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 5, col = 5
Output :
a   b   c   d   e
1   2   3   4   5
a   b   c   d   e
1   2   3   4   5
a   b   c   d   e
*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;
    char c;

    for (i = 0; i < row; i++)
    {
        if (i % 2 == 0)
            c = 'a';
        else
            c = '1';
        for (j = 0; j < col; j++, c++)
            printf("%c\t", c);
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