/*
Write a recursive program which display below pattern.

Output : *  *  *  *  *
*/

#include <stdio.h>

void display()
{
    static int no = 5;

    if (no)
    {   
        no--;
        printf("*  ");
        display();
    }
}

int main(void)
{
    display();

    return 0;
}