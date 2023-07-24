/*
Write a program which accept string from user and copy that characters of string into another string in reverese order.

Input : "Marvellous Python"
Output : "nohtyP suollevraM"
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


char *strcpyrev(char *src, char *dest)
{
    int i, j;

    for (i = strlenX(src) - 1, j = 0; i >= 0; i--, j++)
        dest[j] = src[i];
    dest[j] = '\0';

    return dest;
}

int main(void)
{
    char str1[30];
    char str2[30];

    printf("Enter string : ");
    // fgets(str, sizeof(str), stdin);
    scanf("%[^'\n']s", str1);

    strcpyrev(str1, str2);

    printf("Reversed copied string is : %s\n", str2);

    return 0;
}