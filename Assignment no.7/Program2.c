/*
Write a program which accept number from the user and return the count of odd digits.

Input : 2395
Output : 3

Input : 1018
Output : 2
*/

#include <stdio.h>

int count_odd(int number)
{
    int count = 0;

    while (number != 0)
    {
        if ((number % 10) % 2 != 0)
            count++;
        number /= 10;
    }

    return count;
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    result = count_odd(number);

    printf("Count of odd number is : %d\n", result);

    return 0;
}