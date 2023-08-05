/*
Write a program which accepts one number from user and toggle 7th and 10th bit of that number. Return modified number.
*/

#include <stdio.h>

int toggle_bit(unsigned int num)
{
    int mask = 0x00000240;  
    num ^= mask;

    return num;
}

int main(void)
{
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    result = toggle_bit(num);

    printf("Number after toggling 7th and 10th bit : %d\n", result);

    return 0;
}