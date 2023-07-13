/*
Write a program which accept character from user and check wheteher it is capital or not. (A-Z)

Input : F
Output : TRUE

Input : d
Output : FALSE

*/

#include <stdio.h>

int check_capital(char ch)
{
    if ((ch >= 'A' && ch <= 'Z'))
        return 1;
    return 0;
}

int main(void)
{
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);

    result = check_capital(c);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}