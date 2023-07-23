/*
Write a program which accept 2 strings from user and concat second string after first string. (Implement strcat())

Input : "Marvellous"
Input : "Infosystems"
Output : "Marvellous Infosystems"
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

char *strcatX(char *dest, char *src)
{
    char *ret_dest = dest;

    while (*dest != '\0')
        dest++;
    
    strcpyX(src, dest);

    return ret_dest;
}

int main(void)
{
    char str1[30];
    char str2[30];

    printf("Enter string : ");
    // fgets(str, sizeof(str), stdin);
    scanf("%[^'\n']s", str1);

    printf("Enter string to concat : ");
    // fgets(str, sizeof(str), stdin);
    scanf(" %[^'\n']s", str2);

    strcatX(str1, str2);

    printf("Concated string is : %s\n",  str1);

    return 0;
}