/*
Write a program which accept matrix and return largest number from both the diagonals.

Input:
3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5

Output: 9
*/

#include <stdio.h>
#include <stdlib.h>

void display(int **matrix, int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%d  ", matrix[i][j]);
        printf("\n");
    }
}

void accept_data(int **matrix, int row, int col)
{
    int i, j;

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter [%d][%d] data : ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

int find_largest(int **matrix, int row, int col)
{
    int i, j;
    int max = matrix[0][0];

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if ((i == j) || (i + j == row - 1))
            {
                if (matrix[i][j] > max)
                    max = matrix[i][j];
            }
        }
    }
    return max;
}

int main(void)
{
    int i;
    int row;
    int col;
    int result;
    int **matrix = NULL;

    while (1)
    {
        printf("Enter row : ");
        scanf("%d", &row);

        printf("Enter column : ");
        scanf("%d", &col);

        if (row != col)
        {
            printf("Enter same value of row and column!\n");
            continue;
        }
        break;
    }

    matrix = (int **)malloc(row * sizeof(int *));

    for (i = 0; i < row; i++)
        matrix[i] = (int *)malloc(col * sizeof(int));

    accept_data(matrix, row, col);

    printf("Entered data is : \n");
    display(matrix, row, col);

    result = find_largest(matrix, row, col);

    printf("Largest number from both diagonals is : %d\n", result);

    for (i = 0; i < row; i++)
    {
        free(matrix[i]);
        matrix[i] = NULL;
    }

    free(matrix);
    matrix = NULL;

    return 0;
}