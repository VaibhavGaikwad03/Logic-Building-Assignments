/*
Write a generic program to which accept N values and count frequency of any specific value.

Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 10
Output : 4
*/

#include <iostream>
using std::cout;
using std::cin;

template <class T>
int count_frequency(T *arr, int size, T num)
{
    int i;
    int count = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == num)
            count++;
    }
    return count;
}

int main(void)
{
    int i;
    int num;
    int size;
    int frequency;
    int *arr = NULL;

    cout << "Enter number of elements : ";
    cin >> size;

    arr = new int[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }

    cout << "Enter number to count frequency : ";
    cin >> num;

    frequency = count_frequency(arr, size, num);

    cout << num << " occurred " << frequency << " times\n";

    return 0;
}