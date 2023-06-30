/*
Write a program which accept number from the user and return difference between summation of even digits and summation of odd digits.

Input : 2395
Output : -15    (2 - 17)

Input : 1018
Output : 6      (8 - 2)
*/

#include <stdio.h>

int count_diff(int number)
{
    int digit;
    int sum_even, sum_odd;

    while (number != 0)
    {
        digit = number % 10;
        if (digit % 2 == 0)
            sum_even += digit;
        else
            sum_odd += digit;
        number /= 10;
    }

    return sum_even - sum_odd;
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    result = count_diff(number);

    printf("Difference between summation of even digits and summation of odd digits is : %d\n", result);

    return 0;
}