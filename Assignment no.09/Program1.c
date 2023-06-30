/*
Write a program which accept N numbers from the user and return frequency of even numbers.

Input : 85 66 3 80 93 88
Output : 3
*/

#include <stdio.h>
#include <stdlib.h>

int count_even(int *array, int size)
{
    int i;
    int count;

    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
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

    result = count_even(array, size);

    printf("Frequency of even numbers is : %d\n", result);

    free(array);

    return 0;
}