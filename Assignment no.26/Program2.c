/*
Write a program which accept string from user and accept one character. return frequency of that character.

Input : "Marvellous Multi OS"
Input : M
Output : 2

Input : "Marvellous Multi OS"
Input : W
Output : 0
*/

#include <stdio.h>

int count_char(char *str, char c)
{
    int counter = 0;

    while (*str != '\0')
    {
        if (*str == c)
            counter++;
        str++;
    }
    return counter;
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

    result = count_char(str, c);

    printf("Count of '%c' in string is : %d\n", c, result);

    return 0;
}