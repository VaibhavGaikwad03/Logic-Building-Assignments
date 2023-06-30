/*
Write a program which accept N numbers from the user and accept range, display all elements from that range.

Input : 
    N : 6
    Elements : 85 66 3 76 93 88
    Start : 60
    End : 90
Output : 66 76 88

Input : 
    N : 6
    Elements : 85 66 3 76 93 88
    Start : 30
    End : 50
Output : 
*/

#include <stdio.h>
#include <stdlib.h>

void display_range(int *array, int size, int start, int end)
{
    int i;

    if (start > end)
        return;

    for (i = 0; i < size; i++)
    {
        if (array[i] > start && array[i] < end)
            printf("%d ", array[i]);
    }
}

int main(void)
{
    int i;
    int size, result, start, end;
    int *array = NULL;

    printf("\nEnter the number of elements : ");
    scanf("%d", &size);

    array = (int *)malloc(sizeof(int) * size);

    if (array == NULL)
        return -1;

    printf("\nEnter %d numbers : \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    printf("\nEnter the starting point : ");
    scanf("%d", &start);

    printf("\nEnter the ending point : ");
    scanf("%d", &end);

    display_range(array, size, start, end);

    free(array);

    return 0;
}