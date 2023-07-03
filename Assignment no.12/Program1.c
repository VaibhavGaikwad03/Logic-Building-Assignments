/*
Write a program which accept number from the user and display below pattern.

Input : 5
Output : A B C D E
*/

#include <stdio.h>

void pattern(int num)
{
    int i;
    char ch = 'A';

    for (i = 1; i <= num; i++, ch++)
        printf("%c    ", ch);
}

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    pattern(num);

    return 0;
}