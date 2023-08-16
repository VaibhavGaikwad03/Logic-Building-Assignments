/*
Write a recursive program which display below pattern.

Input : 5
Output : 1  2  3  4  5
*/

#include <stdio.h>

void display(int num)
{
    static int no = 1;
    if (num)
    {
        printf("%d ", no++);
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