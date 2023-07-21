/*
Write a program which accept string from user. reverse that string in place.

Input : "abcd"
Output : "dcba"

Input : "Marvellous"
Output : "suollevraM"
*/

#include <stdio.h>

void swap(char *c1, char *c2)
{   
    *c1 = *c1 + *c2;
    *c2 = *c1 - *c2;
    *c1 = *c1 - *c2;
}

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

char *strrevX(char *str)
{
    int i = 0;
    int j = strlenX(str) - 1;

    while (i < j)
    {
        swap(&str[i], &str[j]);
        i++;
        j--;
    }
    return str;
}

int main(void)
{
    char *result;
    char str[30];

    printf("Enter string : ");
    // fgets(str, sizeof(str), stdin);  //It reads '\n' also
    scanf("%[^'\n']s", str);

    result = strrevX(str);

    printf("Reversed string is : %s\n", result);

    return 0;
}