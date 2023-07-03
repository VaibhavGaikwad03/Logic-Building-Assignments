/*
Write a program which accept number from the user and display below pattern.

Input : 5
Output : 1 * 2 * 3 * 4 * 5 *
*/

#include <stdio.h>

void pattern(int num)
{
    int i;

    for (i = 1; i <= num; i++)
        printf("%d    *    ", i);
}

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    pattern(num);

    return 0;
}