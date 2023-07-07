/*
Write a program which accept rows and numbers of column from user and display below pattern.

Input : row = 4, col = 4
Output :
*   *   *   #   
*   *   #   @   
*   #   @   @   
#   @   @   @ 

*/

#include <stdio.h>

void pattern(int row, int col)
{
    int i, j;

    if (row != col)
        return;

    for (i = 0; i < row; i++)
    {
        for (j = col - 1; j >= 0; j--)
        {
            if (i < j)
                printf("*   ");
            else if (i > j)
                printf("@   ");
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