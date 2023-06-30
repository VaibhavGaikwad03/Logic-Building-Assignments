/*
Write a program which accept number from user and count frequency of such a digits which are less than 6.

Input : 2395
Output : 3

Input : 96672
Output : 1
*/

#include <stdio.h>
#include <stdbool.h>

int count_less_than_six(int number)
{
    int count = 0;

    while (number != 0)
    {
        if (number % 10 < 6)
            count++;
        number /= 10;
    }
    return count;
}

int main(void)
{
    int result;
    int number;

    printf("Enter a numebr : ");
    scanf("%d", &number);

    result = count_less_than_six(number);

    printf("Count of numbers that are less than 6 : %d", result);

    return 0;
}