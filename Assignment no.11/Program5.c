/*
Write a program which accept N numbers from the user and display summation of each number.

Input : 8225 665 3 76 953 858 
Output : 17 17 3 13 17 21
*/

#include <stdio.h>
#include <stdlib.h>

void summation_of_digits(int *array, int size)  
{
    int i;
    int sum;

    for (i = 0; i < size; i++)
    {
        sum = 0;

        while (array[i] != 0)
        {
            sum += array[i] % 10;
            array[i] /= 10;
        }
        printf("%d ", sum);
    }
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

    summation_of_digits(array, size);

    free(array);

    return 0;
}