/*
Write a program which accept string from user and count number of white spaces.

Input : "Marvellous"
Output : 0

Input : "Marvellous Infosystems"
Output : 1

Input : "Marvellous Infosystems by Piyush Manohar Khairnar"
Output : 5

*/

#include <stdio.h>

int count_spaces(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

int main(void)
{
    int result;
    char str[50];

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    result = count_spaces(str);

    printf("Number of spaces are : %d\n", result);

    return 0;
}