/*
Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

Input : "Marvellous Multi OS"
Input : e
Output : TRUE

Input : "Marvellous Multi OS"
Input : W
Output : FALSE
*/

#include <stdio.h>

int check_char(char *str, char c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return 1;
        str++;
    }
    return 0;
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

    result = check_char(str, c);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}