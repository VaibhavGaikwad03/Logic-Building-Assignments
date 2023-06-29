/*
Write a program which accept N numbers from the user and display all such elements which are multiple of 11.

Input : 85 66 3 55 93 88
Output : 66 55 88
*/

#include <stdio.h>
#include <stdlib.h>

void dislay_multiple_of_11(int *array, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] % 11 == 0)
            printf("%d\n", array[i]);
    }
}

int main(void)
{
    int i;
    int size;
    int *array = NULL;

    printf("\nEnter the number of elements : ");
    scanf("%d", &size);

    array = (int *)malloc(sizeof(int) * size);

    if (array == NULL)
        return -1;

    printf("\nEnter %d numbers : \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    dislay_multiple_of_11(array, size);

    free(array);

    return 0;
}