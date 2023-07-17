/*
Write a program which accept string from user and count number of capital characters.

Input : "Marvellous Multi OS"
Output : 4
*/

#include <stdio.h>

int count_capital(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            count++;
        str++;
    }
    return count;
}

int main(void)
{
    int result;
    char arr[20];

    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    result = count_capital(arr);

    printf("There are %d characters are capital in given string.\n", result);

    return 0;
}