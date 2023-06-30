/*
Write a progam which accept number from user and return difference between summation of all its factors and non factors.

Input : 12
Output : -34    (16 - 50)

Input : 10
Output : -29    (8 - 37)
*/

#include <stdio.h>

int diff_summation_of_fact_not_fact(int number)
{
    int sum_fact = 0;
    int sum_non_fact = 0;

    for (int i = 1; i < number; i++)
    {
        if (number % i == 0)
            sum_fact += i;
        else
            sum_non_fact += i;
    }

    return sum_fact - sum_non_fact;
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    result = diff_summation_of_fact_not_fact(number);

    printf("Difference between summation of factors and non factors : %d\n", result);

    return 0;
}