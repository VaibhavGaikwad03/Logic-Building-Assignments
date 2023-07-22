/*
Write a program which accept string from user and copy the contents of that string into another string.
(strncpy implementation)

Input : "Marvellous Multi OS"
Input : 10
Output : "Marvellous"

Note : If third parameter is greater than the size of source string then copy whole string into destination.

*/

#include <stdio.h>

int strlenX(char *str)
{
    int length = 0;

    if (str == NULL)
        return 0;

    while (*str != '\0')
    {
        length++;
        str++;
    }
    return length;
}

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

char *strncpyX(char *src, char *dest, int no)
{
    int i;

    if (no >= strlenX(src))
        return strcpyX(src, dest);
    
    for (i = 0; i < no; i++)
        dest[i] = src[i];

    dest[i] = '\0';

    return dest;
}

int main(void)
{
    int no;
    char str1[30];
    char str2[30];

    printf("Enter string : ");
    // fgets(str, sizeof(str), stdin);
    scanf("%[^'\n']s", str1);

    printf("Enter number of characters to copy : ");
    scanf("%d", &no);

    strncpyX(str1, str2, no);

    printf("Copied string is : %s\n", str2);

    return 0;
}