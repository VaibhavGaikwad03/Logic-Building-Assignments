/*
Write a program which accept character from user and check wheteher it is alphabet or not. (A-Z, a-z)

Input : F
Output : TRUE

Input : &
Output : FALSE

*/

#include <stdio.h>

int check_alphabet(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        return 1;
    return 0;
}

int main(void)
{
    char c;
    int result;

    printf("Enter a character: ");
    scanf("%c", &c);

    result = check_alphabet(c);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}