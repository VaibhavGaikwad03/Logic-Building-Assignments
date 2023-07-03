/*
Write a program which accept N numbers from the user and display all such numbers which contains 3 digits in it.

Input : 8225 665 3 76 953 858 
Output : 665 953 858
*/

#include <stdio.h>
#include <stdlib.h>

// void display_if_three_digits(int *array, int size)   //In this approach the complexity of a program is high. the efficient version is written below.
// {
//     int i;
//     int count;
//     int temp;

//     for (i = 0; i < size; i++)
//     {
//         count = 0;
//         temp = array[i];

//         while (temp != 0)
//         {
//             count++;
//             temp = temp / 10;
//         }
//         if (count == 3)
//             printf("%d ", array[i]);
//     }
// }

void display_if_three_digits(int *array, int size)  //Efficient solution.
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] >= 100 && array[i] <= 999)
            printf("%d ", array[i]);
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

    display_if_three_digits(array, size);

    free(array);

    return 0;
}