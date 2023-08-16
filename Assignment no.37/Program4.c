/*
Write a recursive program which display below pattern.

Input : 6
Output : A  B  C  D  E  F
*/

#include <stdio.h>

void display(int num)
{
    static char c = 'A';
    if (num)
    {
        printf("%c ", c++);
        display(num - 1);
    }
}

int main(void)
{
    int num;

    printf("Enter number : ");
    scanf("%d", &num);

    display(num);

    return 0;
}