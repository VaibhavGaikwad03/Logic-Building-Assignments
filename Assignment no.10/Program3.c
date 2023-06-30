/*
Write a program which accept N numbers from the user and accept another number as 'num' return index of last occurrence of that number.

Input : 85 66 3 66 93 88
Input : 66
Output : 66 found at index 3.

Input : 85 66 3 66 93 88
Input : 93
Output : 93 found at index 4.

Input : 85 11 3 15 11 111
Input : 12
Output : 12 not found.
*/

#include <stdio.h>
#include <stdlib.h>

int last_occurrence(int *array, int size, int num)
{
    int i;
    int index = -1;

    for (i = 0; i < size; i++)
    {
        if (array[i] == num)
            index = i;
    }
    return index;
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

    printf("\nEnter the number to search last occurrence : ");
    scanf("%d", &num);

    result = last_occurrence(array, size, num);

    if (result != -1)
        printf("\n%d found at index %d.\n", num, result);
    else
        printf("\n%d not found.\n", num);

    free(array);

    return 0;
}