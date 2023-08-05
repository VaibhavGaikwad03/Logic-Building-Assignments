/*
Write a program which accepts one number and position from user and check whether bit at that position is on or off. If bit is on return TRUE otherwise return FALSE.

Input : 10  2
Output : TRUE

*/

#include <stdio.h>

int check_bit(unsigned int num, int pos)
{
    int mask = 0x00000001;
    mask = mask << (pos - 1);

    if (num & mask)
        return 1;
    return 0;
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

    result = check_bit(num, pos);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}