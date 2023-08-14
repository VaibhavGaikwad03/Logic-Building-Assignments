/*
Write a recursive program which display below pattern.

Output : A  B  C  D  E  F
*/

#include <stdio.h>

void display()
{
    static int no = 6;
    static char c = 'A';

    if (no--)
    {   
        printf("%c  ", c++);
        display();
    }
}

int main(void)
{
    display();

    return 0;
}