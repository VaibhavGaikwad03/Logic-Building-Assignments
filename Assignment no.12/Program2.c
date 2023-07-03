/*
Write a program which accept number from the user and display below pattern.

Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/

#include <stdio.h>

void pattern(int num)
{
    int i;

    for (i = num; i >= 1; i--)
        printf("%d    #    ", i);
}

int main(void)
{
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);

    pattern(num);

    return 0;
}