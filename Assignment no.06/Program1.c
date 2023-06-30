/*
Write a program which accept number from the user and display its multiplication of factors.

Input : 12
Output : 144

Input : 13
Output : 1
*/

#include <stdio.h>

int mult_fact(int number)
{
    int mult = 1;

    for (int i = 1; i <= number / 2; i++)
    {
        if (number % i == 0)
            mult *= i;
    }
    return mult;
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    result = mult_fact(number);

    printf("Result is : %d\n", result);

    return 0;
}