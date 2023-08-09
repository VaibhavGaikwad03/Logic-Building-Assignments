/*
Write a program which accepts one number from user and toggle contents of first and last nibble of the number. Return modified number (Nibble is a group of four bits).

*/

#include <stdio.h>

int toggle_nibble(unsigned int num)
{
    int mask = 0xf000000f;

    return num ^ mask;
}

int main(void)
{
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    result = toggle_nibble(num);

    printf("Number after toggling first and last nibble : %d\n", result);

    return 0;
}