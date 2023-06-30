/*
Write a program which accept N numbers from the user and accept another number as 'num' return index of first occurrence of that number.

Input : 85 66 3 66 93 88
Input : 66
Output : 66 found at index 1.

Input : 85 66 3 66 93 88
Input : 12
Output : 12 not found.
*/

#include <stdio.h>
#include <stdlib.h>

int first_occurrence(int *array, int size, int num)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] == num)
            return i;
    }

    return -1;
}

int main(void)
{
    int i;
    int size, num, result;
    int *array = NULL;

    printf("\nEnter the number of elements : ");
    scanf("%d", &size);

    array = (int *)malloc(sizeof(int) * size);

    if (array == NULL)
        return -1;

    printf("\nEnter %d numbers : \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    printf("\nEnter the number to search : ");
    scanf("%d", &num);

    result = first_occurrence(array, size, num);

    if (result != -1)
        printf("\n%d found at index %d.\n", num, result);
    else
        printf("\n%d not found.\n", num);

    free(array);

    return 0;
}