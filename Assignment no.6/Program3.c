/*
Write a program which accept number from the user and display all its non factors.

Input : 12
Output : 5 7 8 9 10 11 12

Input : 13
Output : 2 3 4 5 6 7 8 9 10 11 12
*/

#include <stdio.h>

void display_non_fact(int number)
{
    for (int i = 1; i < number; i++)
    {
        if (number % i != 0)
            printf("%d\n", i);
    }
}

int main(void)
{
    int number;
    int result;

    printf("Enter a number : ");
    scanf("%d", &number);

    display_non_fact(number);

    return 0;
}