/*
Write a generic program to which accept N values reverse the contents.

Input : 10 20 30 10 30 40 10 40 10
Output : 10 40 10 40 30 10 30 20 10
*/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

template <class T>
void reverse(T *arr, int size)
{
    int i = 0;
    int j = size - 1;
    
    while (i < j)
    {
        arr[i] = arr[i] + arr[j];
        arr[j] = arr[i] - arr[j];
        arr[i] = arr[i] - arr[j];
        i++;
        j--;
    }
}

int main(void)
{
    int i;
    int size;
    int *arr = NULL;

    cout << "Enter number of elemenets : ";
    cin >> size;

    arr = new int[size];

    if (arr == NULL)
    {
        cout << "Memory allocation FAILED\n";
        exit(1);
    }

    for (i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " element : ";
        cin >> arr[i];
    }

    reverse(arr, size);

    cout << "Reversed array is : \n";
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}