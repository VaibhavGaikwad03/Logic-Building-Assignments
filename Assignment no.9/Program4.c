/*
Write a program which accept N numbers from the user and return frequency of 11 from it.

Input : 85 66 3 15 93 88
Output : 0

Input : 85 11 3 15 11 111
Output : 2
*/

#include <stdio.h>
#include <stdlib.h>

int count_frequency(int *array, int size)
{
    int i;
    int count = 0;

    for (i = 0; i < size; i++)
    {
        if (array[i] == 11)
            count++;
    }
    return count;
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

    result = count_frequency(array, size);

    printf("Frequency of 11 is : %d\n", result);

    free(array);

    return 0;
}