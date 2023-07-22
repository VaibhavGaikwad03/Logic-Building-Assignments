/*
Write a program which accept string from user and copy the capital characters of that string into another string.

Input : "Marvellous Multi OS"
Output : "MMOS"
*/

#include <stdio.h>

char *strcpycap(char *src, char *dest)
{
    while (*src != '\0')
    {
        if (*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            dest++;
        }
        src++;
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

    printf("Copied string is : %s\n", str2);

    return 0;
}