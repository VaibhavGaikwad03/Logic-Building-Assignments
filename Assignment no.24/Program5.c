/*
Write a program which accept string from user and display it in reverse order.

Input : "MarvellouS"
Output : "SuollevraM"

*/

#include <stdio.h>
#include <string.h>

void reverse(char *str)
{
    int i;

    for (i = strlen(str); i >= 0; i--)
        printf("%c", str[i]);
    printf("\n");
}

int main(void)
{
    char arr[20];

    printf("Enter the string : ");
    fgets(arr, sizeof(arr), stdin);

    reverse(arr);

    return 0;
}