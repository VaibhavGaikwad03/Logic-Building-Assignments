/*
Write a program which accept N numbers from the user and return smallest number.

Input : 85 66 3 66 93 88
Output : 3
*/

#include <stdio.h>
#include <stdlib.h>

int find_min(int *array, int size)
{
    int i;
    int min = array[i];

    for (i = 0; i < size; i++)
    {
        if (array[i] < min)
            min = array[i];
    }
    return min;
}

int main(void)
{
    int i;
    int size, result;
    int *array = NULL;

    printf("\nEnter the number of elements : ");
    scanf("%d", &size);

     array = (int *)malloc(sizeof(int) * size);

    if (array == NULL)
        return -1;

    printf("\nEnter %d numbers : \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    result = find_min(array, size);

    printf("Smallest number from the array is : %d\n", result);

    free(array);

    return 0;
}