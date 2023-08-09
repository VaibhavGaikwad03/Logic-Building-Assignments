/*
Write a program which accepts one number from user and check whether 9th or 12th bit is on or off.

Input : 257
Output : TRUE

*/

#include <stdio.h>

int check_bit(unsigned int num)
{
    int mask1 = 0x00000100;
    int mask2 = 0x00000800;

    if ((num & mask1) || (num & mask2))
        return 1;
    return 0; 
}

int main(void)
{
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    result = check_bit(num);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}