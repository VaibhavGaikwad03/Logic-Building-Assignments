/*
Write a program which accepts one number and position from user and toggle that bit. Return modified number.

Input : 10  3
Output : 14

*/

#include <stdio.h>

int toggle_bit(unsigned int num, int pos)
{
    int mask = 0x00000001;
    mask = mask << (pos - 1);

    return num ^ mask;
}

int main(void)
{
    int pos;
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Enter position to check bit : ");
    scanf("%d", &pos);

    result = toggle_bit(num, pos);

    printf("Number after toggling %d position of bit : %d\n", pos, result);

    return 0;
}