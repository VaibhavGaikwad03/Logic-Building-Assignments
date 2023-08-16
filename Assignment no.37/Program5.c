/*
Write a recursive program which display below pattern.

Input : 6
Output : a  b  c  d  e  f
*/

#include <stdio.h>

void display(int num)
{
    static char c = 'a';
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