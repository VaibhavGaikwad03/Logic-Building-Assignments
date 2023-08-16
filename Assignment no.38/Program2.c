/*
Write a recursive program which accept number from user and return summation of its digits.

Input : 879
Output : 24
*/

#include <stdio.h>

int sum_of_digits(int num)
{
    static int sum = 0;

    if (num)
    {
        sum = sum + (num % 10);
        sum_of_digits(num / 10);
    }
    return sum;
}

int main(void)
{
    int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = sum_of_digits(num);

    printf("Summation of digits is : %d\n", result);

    return 0;
}