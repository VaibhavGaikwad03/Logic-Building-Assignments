/*
Write a program which accept string from user and copy the contents of that string into another string.
(strcpy implementation)

Input : "Marvellous Multi OS"
Output : "Marvellous Multi OS"   in another string
*/

#include <stdio.h>

char *strcpyX(char *src, char *dest)
{
    while (*src != '\0')
    {
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

    strcpyX(str1, str2);

    printf("Copied string is : %s\n", str2);

    return 0;
}