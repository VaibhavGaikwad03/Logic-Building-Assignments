/*
Write a program which accept string from user and display only digits from the string.

Input : "marvell89ous121"
Output : "89121"
*/

#include <stdio.h>

void display_digits(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            printf("%c", str[i]);
    }
    printf("\n");
}

int main(void)
{
    char *result;
    char str[20];

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);

    display_digits(str);

    return 0;
}