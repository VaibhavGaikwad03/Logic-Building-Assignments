/*
Write a program which accept character from user and check wheteher it is digit or not. (0-9)

Input : 7
Output : TRUE

Input : d
Output : FALSE

*/

#include <stdio.h>

int check_digit(char ch)
{
    if ((ch >= '0' && ch <= '9'))
        return 1;
    return 0;
}

int main(void)
{
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);

    result = check_digit(c);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}