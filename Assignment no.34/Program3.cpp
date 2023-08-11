/*
Write a generic program to accept N values from user and return addition of that values.
*/

#include <iostream>

template <class T>
T add_n(T *arr, int size)
{
    int i;
    int add = 0;

    for (i = 0; i < size; i++)
        add += arr[i];
    return add;
}

int main(void)
{
    int i;
    int size;
    float summation;
    float *arr = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    arr = (float *)malloc(sizeof(float) * size);

    for (i = 0; i < size; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%f", &arr[i]);
    }

    summation = add_n(arr, size);

    printf("Summation of all elements is : %f\n", summation);

    return 0;
}