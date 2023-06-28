/*
Write a program which accept number from the user and count frequency of 2 in it.

Input : 2395
Output : 1

Input : 1018
Output : 0
*/

#include <stdio.h>
#include <stdbool.h>

int count_two(int number)
{
    int count = 0;

    while (number != 0)
    {
        if (number % 10 == 2)
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

    result = count_two(number);

    printf("Count of 2 is : %d", result);

    return 0;
}