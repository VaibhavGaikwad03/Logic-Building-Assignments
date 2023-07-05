/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 6, col = 5
Output :
*   *   *   *   *   
*   @   @   @   *   
*   @   @   @   *   
*   @   @   @   *   
*   @   @   @   *   
*   *   *   *   *

*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
                printf("*   ");
            else
                printf("@   ");
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