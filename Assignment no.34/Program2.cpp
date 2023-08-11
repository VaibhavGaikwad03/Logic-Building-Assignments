/*
Write a generic program to find largest number from three numbers.
*/

#include <iostream>

template <class T>
T find_largest(T num1, T num2, T num3)
{
    if (num1 > num2 && num1 > num3)
        return num1;
    if (num2 > num1 && num2 > num3)
        return num2;
    return num3;
}

int main(void)
{
    int num1;
    int num2;
    int num3;
    int result;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    printf("Enter third number : ");
    scanf("%d", &num3);

    result = find_largest(num1, num2, num3);

    printf("Largest number is : %d\n", result);

    return 0;
}