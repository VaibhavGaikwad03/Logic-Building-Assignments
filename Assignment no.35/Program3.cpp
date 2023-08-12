/*
Write a generic program to which accept N values and search first occurrence of any specific value.

Input : 10 20 30 10 30 40 10 40 10
Value to check frequency : 40
Output : 6
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <class T>
int search_first_occ(T *arr, int size, T key)
{
    int i;
    int count = 0;

    for (i = 0; i < size; i++)
    {
        count++;
        if (arr[i] == key)
            break;
    }
    return count;
}

int main(void)
{
    int i;
    int num;
    int size;
    int index;
    int *arr = NULL;

    cout << "Enter number of elements : ";
    cin >> size;

    arr = new int[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }

    cout << "Enter number to search : ";
    cin >> num;

    index = search_first_occ(arr, size, num);

    cout << num << " found at index "<< index << endl;

    return 0;
}