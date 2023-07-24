/*
Write a program which accept string from user and copy that characters of string into another string by converting all small characters into capital case.

Input : "Marvellous Python 2"
Output : "MARVELLOUS PYTHON 2"
*/

#include <stdio.h>

char *strcpycap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'a' && *src <= 'z')
            *dest = *src - 32;
        else
            *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    return dest;
}

int main(void)
{
    char str1[30];
    char str2[30];

    printf("Enter string : ");
    // fgets(str, sizeof(str), stdin);
    scanf("%[^'\n']s", str1);

    strcpycap(str1, str2);

    printf("Capitalized copied string is : %s\n", str2);

    return 0;
}