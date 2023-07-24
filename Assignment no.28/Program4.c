/*
Write a program which accept string from user and copy that characters of string into another string by converting all capital characters into small case.

Input : "Marvellous Python 2"
Output : "marvellous python 2"
*/

#include <stdio.h>

char *strcpysmall(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
            *dest = *src + 32;
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

    strcpysmall(str1, str2);

    printf("Lowercase copied string is : %s\n", str2);

    return 0;
}