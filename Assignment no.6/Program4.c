/*
Write a program which accept number from user and return summation of all its non factors.

Input : 12
Output : 50

Input : 10
Output : 37
*/

#include <stdio.h>

int add_non_fact(int number)
{
    int sum = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i != 0)
            sum += i;
    }
    return sum;
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    result = add_non_fact(number);

    printf("Summation of non factors is : %d\n", result);

    return 0;
}