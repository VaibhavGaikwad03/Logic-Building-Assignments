/*
Write a program which accept number from the user and return the count of digits in between 3 and 7.

Input : 2395
Output : 1

Input : 1018
Output : 0
*/

#include <stdio.h>

int count_range(int number)
{
    int count = 0;

    while (number != 0)
    {
        if ((number % 10) > 3 && (number % 10) < 7)
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

    result = count_range(number);

    printf("Count of numbers between 3 to 7 is : %d\n", result);

    return 0;
}