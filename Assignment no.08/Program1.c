/*
Write a program which accept N numbers from the user and return difference between summation of even elements and summation of odd elements.

Input : 85 66 3 80 93 88
Output : 53 (234 - 181)
*/

#include <stdio.h>
#include <stdlib.h>

int difference(int *array, int size)
{
    int i;
    int sum_even = 0, sum_odd = 0;

    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
            sum_even += array[i];
        else
            sum_odd += array[i];
    }
    return sum_even - sum_odd;
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

    result = difference(array, size);

    printf("\nDifference between summation of even elements and summation of odd elements is : %d\n", result);

    free(array);

    return 0;
}