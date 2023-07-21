/*
Write a program which accept string from user and accept one character. Return index of first occurrence of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 0

Input : "Marvellous Multi OS"
Input : W
Output : -1

Input : "Marvellous Multi OS"
Input : e
Output : 4
*/

#include <stdio.h>

int first_occ(char *str, char c)
{
    int counter = 0;

    while (*str != '\0')
    {
        if (*str == c)
            return counter;
        str++;
        counter++;
    }
    return -1;
}

int main(void)
{
    char c;
    int result;
    char str[30];

    printf("Enter string : ");
    fgets(str, sizeof(str), stdin);
    // scanf("%[^'\n']s", str);

    printf("Enter character : ");
    scanf("%c", &c);

    result = first_occ(str, c);

    if (result != -1)
        printf("'%c' first occurred at index %d\n", c, result);
    else
        printf("'%c' not found\n", c);

    return 0;
}