/*
Write a generic program to multiply two numbers.
*/

#include <iostream>

template <class T>
T multiply(T num1, T num2)
{
    return num1 * num2;
}

int main(void)
{
    float num1;
    float num2;
    float result;

    printf("Enter first number : ");
    scanf("%f", &num1);

    printf("Enter second number : ");
    scanf("%f", &num2);

    result = multiply(num1, num2);

    printf("Multiplication of %f and %f is : %f\n", num1, num2, result);

    return 0;
}