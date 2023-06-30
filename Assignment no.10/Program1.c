/*
Write a program which accept N numbers from the user and accept another number as 'num' check whether 'num' is present or not.

Input : 85 66 3 66 93 88
Input : 66
Output : 66 is present

Input : 85 66 3 80 93 88
Input : 12
Output : 12 is absent
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check_present_or_absent(int *array, int size, int num)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] == num)
            return true;
    }
    return false;
}

int main(void)
{
    int i;
    int size, num;
    bool result;
    int *array = NULL;

    printf("\nEnter the number of elements : ");
    scanf("%d", &size);

    array = (int *)malloc(sizeof(int) * size);

    if (array == NULL)
        return -1;

    printf("\nEnter %d numbers : \n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);

    printf("\nEnter the number to check present or not : ");
    scanf("%d", &num);

    result = check_present_or_absent(array, size, num);

    if (result == true)
        printf("%d is present.", num);
    else
        printf("%d is absent", num);

    free(array);

    return 0;
}