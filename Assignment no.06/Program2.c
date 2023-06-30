/*
Write a program which accept number from the user and display its factors in decreasing order.

Input : 12
Output : 6 4 3 2 1

Input : 13
Output : 1
*/

#include <stdio.h>

void display_fact(int number)
{
    for (int i = number / 2; i > 0; i--)
    {
        if (number % i == 0)
            printf("%d\n", i);
    }
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    display_fact(number);

    return 0;
}