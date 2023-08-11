/*
Write a generic program to accept N values from user and return smallest number.
*/

#include <iostream>

template <class T>
T find_smallest(T *arr, int size)
{
    int i;
    T min = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

int main(void)
{
    int i;
    int size;
    float smallest;
    float *arr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    arr = (float *)malloc(sizeof(float) * size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%f", &arr[i]);
    }

    smallest = find_smallest(arr, size);

    printf("Smallest element from the array is : %f\n", smallest);

    return 0;
}