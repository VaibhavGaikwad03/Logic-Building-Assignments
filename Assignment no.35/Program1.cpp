/*
Write a generic program to which accept one value and one number from user. Print that value that number of times on screen.

Input : M 7
Output : M M M M M M M

Input : 11 3
Output : 11 11 11
*/

#include <iostream>
using std::cout;
using std::cin;

template <class T>
void display(int num, T value)
{
    int i;

    for (i = 0; i < num; i++)
        cout << value << " ";
}

int main(void)
{
    int num;
    char value;

    cout << "Enter value : ";
    cin >> value;

    cout << "Enter number : ";
    cin >> num;

    display(num, value);

    return 0;
}