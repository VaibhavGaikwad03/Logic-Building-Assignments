/*
Write a program which accepts one number from user and off 7th bit of that number if it is on. Return  modified number.
*/

#include <stdio.h>

int off_bit(unsigned int num)
{
    int mask = 0x00000040;

    if (mask & num)
        num ^= mask;
    return num;
}

int main(void)
{
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    result = off_bit(num);

    printf("Number after 7th bit off : %d\n", result);

    return 0;
}