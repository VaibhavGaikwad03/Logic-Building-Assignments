/*
Write a program which accepts one number, two positions from user and check whether bit at first or bit at second is ON or OFF.

Input : 10  3   7
Output : TRUE

*/

#include <stdio.h>

int check_bit(unsigned int num, int pos1, int pos2)
{
    int mask = 0x00000001;

    if (((num >> pos1) & mask) || ((num & pos2) & mask))
        return 1;
    return 0;
}

int main(void)
{
    int pos1;
    int pos2;
    int result;
    unsigned int num;

    printf("Enter number : ");
    scanf("%d", &num);

    printf("Enter first position : ");
    scanf("%d", &pos1);

    printf("Enter second positon : ");
    scanf("%d", &pos2);

    result = check_bit(num, pos1, pos2);

    if (result == 1)
        printf("TRUE\n");
    else
        printf("FALSE\n");

    return 0;
}