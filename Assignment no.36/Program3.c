/*
Write a recursive program which display below pattern.

Output : 5  4  3  2  1
*/

#include <stdio.h>

void display()
{
    static int no = 5;

    if (no)
    {   
        printf("%d  ", no--);
        display();
    }
}

int main(void)
{
    display();

    return 0;
}