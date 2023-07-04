/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 3, col = 4
Output :
*   #   *   #
*   #   *   #
*   #   *   #

*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i;

    for (i = 0; i < row; i++)
    {
        for (int j = col; j > 0; j--)
        {
            if (j % 2 == 0)
                printf("*   ");
            else
                printf("#   ");
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