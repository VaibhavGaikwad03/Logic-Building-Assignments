/*
Write a program which accept number from the user and return multiplication of all digits.

Input : 2395
Output : 270

Input : 1018
Output : 8
*/

#include <stdio.h>

int multiplication_of_digits(int number)
{
    int digit;
    int multiplication = 1;

    while (number != 0)
    {
        digit = number % 10;
        if (digit != 0)   
            multiplication *= digit;
        number /= 10;
    }

    return multiplication;
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    result = multiplication_of_digits(number);

    printf("Multiplication of digits is : %d\n", result);

    return 0;
}