/*
Write a recursive program which display below pattern.

Output : a  b  c  d  e  f
*/

#include <stdio.h>

void display()
{
    static int no = 6;
    static char c = 'a';

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