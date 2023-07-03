/*
Write a program which accept number from the user and display below pattern.

Input : 8
Output : 2 4 6 8 10 12 14 16
*/

#include <stdio.h>

void pattern(int num)
{
    int i;

    for (i = 1; i <= num; i++)
        printf("%d    ", i * 2);
}

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    pattern(num);

    return 0;
}