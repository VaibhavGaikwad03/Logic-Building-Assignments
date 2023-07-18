/*
Write a program which accept string from user and convert it into upper case.

Input : "Marvellous Multi OS"
Output : "MARVELLOUS MULTI OS"
*/

#include <stdio.h>

char *struprx(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
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

    result = struprx(str);

    printf("Upper case string is : %s\n", result);

    return 0;
}