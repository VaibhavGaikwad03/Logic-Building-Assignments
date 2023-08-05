/*
Write a program which accepts one number from user and on its first 4 bits. Return modified number.
*/

#include <stdio.h>

int on_bit(unsigned int num)
{
    int mask = 0x0000000F;  
    num |= mask;

    return num;
}

int main(void)
{
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    result = on_bit(num);

    printf("Number after first 4 bits on : %d\n", result);

    return 0;
}