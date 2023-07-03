/*
Write a program which accept N numbers from the user and return largest number.

Input : 85 66 3 66 93 88
 Output : 93
*/

#include <stdio.h>
#include <stdlib.h>

int find_max(int *array, int size)
{
    int i;
    int max = array[i];

    for (i = 0; i < size; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max;
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

    result = find_max(array, size);

    printf("Largest number from the array is : %d\n", result);

    free(array);

    return 0;
}