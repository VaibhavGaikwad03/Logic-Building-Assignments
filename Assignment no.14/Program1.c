/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 4, col = 4
Output :
A   B   C   D
A   B   C   D
A   B   C   D
A   B   C   D
*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;
    char ch = 'A';

    for (i = 0; i < row; i++)
    {
        ch = 'A';
        
        for (j = 0; j < col; j++)
            printf("%c   ", ch++);
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