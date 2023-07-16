/*
Write a program which accept character from user. If character is small display its corresponding capital character, and if it is small then display its corresponding capital. In another cases display as it is.
Input : F
Output : f

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : %

*/

#include <stdio.h>

void display_corresponding(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        printf("%c\n", ch + 32);
    else if (ch >= 'a' && ch <= 'z')
        printf("%c\n", ch - 32);
    else
        printf("%c\n", ch);
}

int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    display_corresponding(c);

    return 0;
}