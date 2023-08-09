/*
Write a program which accepts one number from user and range of positions from user. Toggle all bits from that range.

Input : 897  9   13
Output : 7571

*/

#include <stdio.h>

int toggle_bits_by_range(unsigned int num, int start, int end)
{
    int range;
    int mask = 0;

    if (start > end || (start < 0 && end > 32))
        return -1;
    
    range = end - start;

    for (int i = 0; i < range; i++)
    {
        mask = mask << 1;
        mask = mask | 1;
    }

    mask = mask << start;

    num = num ^ mask;

    return num;
}

int main(void)
{
    int start;
    int end;
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Enter starting position : ");
    scanf("%d", &start);

    printf("Enter ending positon : ");
    scanf("%d", &end);

    result = toggle_bits_by_range(num, start, end);

    if (result != -1)
        printf("Result after toggling bits from range of %d to %d is : %d\n", start, end, result);
    else
        printf("Range is invalid\n");

    return 0;
}