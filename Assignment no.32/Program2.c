/*
Write a program which accepts one number and position from user and off that bit. Return modified number.

Input : 10  2
Output : 8

*/

#include <stdio.h>

int off_bit(unsigned int num, int pos)
{
    int result;
    int mask = 0x00000001;
    mask = mask << (pos - 1);

    result = num & mask;

    if (result == mask) // bit on ahe ka check kara
        num = num ^ mask;
    return num;
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

    result = off_bit(num, pos);

    printf("Number after off %d position of bit : %d\n", pos, result);

    return 0;
}