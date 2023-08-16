/*
Write a recursive program which display below pattern.

Input : 5
Output : 5  *  4  *  3  *  2  *  1  *
*/

#include <stdio.h>

void display(int num)
{
    if (num)
    {
        printf("%d *", num);
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