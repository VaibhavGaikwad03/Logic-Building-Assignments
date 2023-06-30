/*
Write a program which accept number from the user and check whether it contains zero in it or not.

Input : 2395
Output : There is no zero.

Input : 1018
Output : It contains zero.
*/

#include <stdio.h>
#include <stdbool.h>

bool check_zero(int number)
{
    while (number != 0)
    {
        if (number % 10 == 0)
            return true;
        number /= 10;
    }
    return false;
}

int main(void)
{
    bool result;
    int number;

    printf("Enter a numebr : ");
    scanf("%d", &number);

    result = check_zero(number);

    if (result == true)
        printf("It contains zero.\n");
    else
        printf("It does not contains zero.\n");

    return 0;
}