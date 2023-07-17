/*
Write a program which accept string from user and check whether it contains vowels in it or not.

Input : "marvellous"
Output : TRUE

Input : "Demo"
Output : TRUE

Input : "xyz"
Output : FALSE

*/

#include <stdio.h>

int check_vowels(char *str)
{
    int count = 0;

    while (*str != '\0')
    {
        if (*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
            return 1;
        str++;
    }
    return 0;
}

int main(void)
{
    int flag;
    char arr[20];

    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    flag = check_vowels(arr);

    if (flag == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}