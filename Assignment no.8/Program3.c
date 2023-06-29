/*
Write a program which accept N numbers from the user and display all such elements which are even and divisible by 5.

Input : 85 66 3 80 93 88
Output : 80
*/

#include <stdio.h>
#include <stdlib.h>

void dislay_even_and_div_by_5(int *array, int size)
{
    int i;
    int sum_even = 0, sum_odd = 0;

    for (i = 0; i < size; i++)
    {
        if ((array[i] % 5 == 0) && (array[i] % 2 == 0))
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

    dislay_even_and_div_by_5(array, size);

    free(array);

    return 0;
}