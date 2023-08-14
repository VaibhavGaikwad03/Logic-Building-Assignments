/*
Write a recursive program which display below pattern.

Output : 5  4  3  2  1
*/

#include <stdio.h>

void display()
{
    static int no = 0;

    if (no < 5)
    {
        no++;
        display();
        printf("%d  ", no--);
    }
}
int main(void)
{
    display();

    return 0;
}