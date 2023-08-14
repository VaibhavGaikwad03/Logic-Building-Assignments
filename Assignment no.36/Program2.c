/*
Write a recursive program which display below pattern.

Output : 1  2  3  4  5
*/

#include <stdio.h>

void display()
{
    static int no = 0;

    if (no < 5)
    {   
        no++;
        printf("%d  ", no);
        display();
    }
}

int main(void)
{
    display();

    return 0;
}