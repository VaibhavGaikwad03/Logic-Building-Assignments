/*
Write a program which accept string from user and convert it into lower case.

Input : "Marvellous Multi OS"
Output : "marvellous multi os"
*/

#include <stdio.h>

char *strlwrx(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}

int main(void)
{
    char *result;
    char str[20];

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    result = strlwrx(str);

    printf("Lower case string is : %s\n", result);

    return 0;
}