/*
Write a program which accepts one number from user and count number of ON(1) bits in it without using % and / operator.

Input : 11
Output : 3

*/

#include <stdio.h>

int count_on_bits(unsigned int num)
{
    int count = 0;
    int mask = 0x00000001;

    while (num != 0)
    {
        if (num & mask)
            count++;
        num = num >> 1;
    }
    return count;
}

int main(void)
{
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    result = count_on_bits(num);

    printf("Number of on bits are : %d\n", result);

    return 0;
}
