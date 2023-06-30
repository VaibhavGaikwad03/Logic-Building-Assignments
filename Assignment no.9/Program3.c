/*
Write a program which accept N numbers from the user and check whether that number contains 11 in it or not.

Input : 85 66 11 80 93 88
Output : 11 is present

Input : 85 66 3 80 93 88
Output : 11 is absent
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check_11_present_or_absent(int *array, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        if (array[i] == 11)
            return true;
    }
    return false;
}

int main(void)
{
    int i;
    int size;
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

    result = check_11_present_or_absent(array, size);

    if (result == true)
        puts("11 is present");
    else
        puts("11 is absent");

    free(array);

    return 0;
}