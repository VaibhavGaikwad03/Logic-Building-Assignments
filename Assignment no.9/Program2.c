/*
Write a program which accept N numbers from the user and return difference between frequency of even and odd numbers.

Input : 85 66 3 80 93 88 90
Output : 1  (4-3)
*/

#include <stdio.h>
#include <stdlib.h>

int difference(int *array, int size)
{
    int i;
    int even_cout = 0, odd_count = 0;

    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
            even_cout++;
        else
            odd_count++;
    }
    return even_cout - odd_count;
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

    printf("Difference between frequency of even and odd is : %d\n", result);

    free(array);

    return 0;
}