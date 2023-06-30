/*
Write a program which accept number from the user and count frequency of 5 in it.

Input : 2395
Output : 0

Input : 9440
Output : 2
*/

#include <stdio.h>
#include <stdbool.h>

int count_four(int number)
{
    int count = 0;

    while (number != 0)
    {
        if (number % 10 == 4)
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

    result = count_four(number);

    printf("Count of 4 is : %d", result);

    return 0;
}