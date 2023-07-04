/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 4, col = 4
Output :
A   B   C   D
a   b   c   d
A   B   C   D
a   b   d   d

*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;
    char ch_cap, ch_small;

    for (i = 0; i < row; i++)
    {
        ch_cap = 'A';
        ch_small = 'a';

        for (j = 0; j < col; j++)
        {
            if (i % 2 == 0)
                printf("%c   ", ch_cap++);
            else
                printf("%c   ", ch_small++);
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