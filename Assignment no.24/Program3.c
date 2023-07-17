/*
Write a program which accept string from user and return difference between frequency of small characters and frequency of capital characters.

Input : "MarvellouS"
Output : 6  (8-2)
*/

#include <stdio.h>

int difference(char *str)
{
    int count_small = 0;
    int count_capital = 0;

    while (*str != '\0')
    {
        if (*str >= 'A' && *str <= 'Z')
            count_capital++;

        if (*str >= 'a' && *str <= 'z')
            count_small++;
        str++;
    }
    return count_small - count_capital;
}

int main(void)
{
    int result;
    char arr[20];

    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    result = difference(arr);

    printf("Difference between small and capital characters is : %d\n", result);

    return 0;
}