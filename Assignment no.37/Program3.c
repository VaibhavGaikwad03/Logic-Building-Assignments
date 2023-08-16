/*
Write a recursive program which display below pattern.

Input : 5
Output : 5  4  3  2  1
*/

#include <stdio.h>

void display(int num)
{
    static int no = 1;
    if (num)
    {
        no++;
        display(num - 1);
        printf("%d ", --no);
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