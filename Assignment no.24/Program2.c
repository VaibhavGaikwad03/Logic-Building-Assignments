/*
Write a program which accept string from user and count number of small characters.

Input : "Marvellous"
Output : 9
*/

#include <stdio.h>
#include <string.h>

int count_small(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str >= 'a' && *str <= 'z')
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

    result = count_small(arr);

    printf("There are %d characters are small in given string.\n", result);

    return 0;
}