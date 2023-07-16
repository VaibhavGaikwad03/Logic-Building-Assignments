/*
Write a program which accept character from user and display its ASCII value in decimal, octal and hexadecimal format.

Input : A
Output : 
Decimal 65
Octal   0101
Hexadecimal 0X41

*/

#include <stdio.h>

void display(char ch)
{
    printf("Decimal %d\nOctal   %o\nHexadecimal %x\n", ch, ch, ch);
}

int main(void)
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    display(c);

    return 0;
}