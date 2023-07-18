/*
Write a program which accept string from user and toggle the case.

Input : "Marvellous Multi OS"
Output : "mARVELLOUS mULTI os"
*/

#include <stdio.h>

char *strtogglex(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
            continue;
        }

        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
    }
    return str;
}

int main(void)
{
    char *result;
    char str[20];

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    result = strtogglex(str);

    printf("Toggled case string is : %s\n", result);

    return 0;
}