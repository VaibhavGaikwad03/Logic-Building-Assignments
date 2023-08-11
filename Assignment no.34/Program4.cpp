/*
Write a generic program to accept N values from user and return largest number.
*/

#include <iostream>

template <class T>
T find_largest(T *arr, int size)
{
    int i;
    T max = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(void)
{
    int i;
    int size;
    float largest;
    float *arr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    arr = (float *)malloc(sizeof(float) * size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%f", &arr[i]);
    }

    largest = find_largest(arr, size);

    printf("Largest element from the array is : %f\n", largest);

    return 0;
}