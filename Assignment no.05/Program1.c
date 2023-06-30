/*
Write a program which accept number from the user and display its digits in reverse order.

Input : 2395
Output : 
5
9
3
2
*/

#include <stdio.h>

void display_digits_reverse(int number)
{
    if (number < 0)
        number = -number;

    while (number != 0)
    {
        printf("%d\n", number % 10);
        number /= 10;
    }
}

int main(void)
{
    int number;

    printf("Enter a number : ");
    scanf("%d", &number);

    display_digits_reverse(number);

    return 0;
}