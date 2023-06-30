/*
Write a program which accept N numbers from the user and return product of all odd elements.

Input : 15 66 3 70 10 88
Output : 45

Input : 44 66 72 70 10 88
Output : 0
*/

#include <stdio.h>
#include <stdlib.h>

int product_odd(int *array, int size)
{
    int i, product = 1;

    for (i = 0; i < size; i++)
    {
        if (array[i] % 2 != 0)
            product *= array[i];
    }

    if (product == 1)
        product = 0;
    return product;
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

    result = product_odd(array, size);

    printf("\nProduct of odd numbers is : %d\n", result);

    free(array);

    return 0;
}