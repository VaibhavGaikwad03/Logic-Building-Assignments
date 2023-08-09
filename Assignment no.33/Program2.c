/*
Write a program which accepts two numbers from user and display position of common ON bits from that two numbers.

Input : 11  15
Output : 2  4

*/

#include <stdio.h>

void display_common_on_bits(unsigned int num1, unsigned int num2)
{
    int common_bit = 1;
    int mask = 0x00000001;

    printf("Common on bits are : ");
    while (num1 != 0 && num2 != 0)
    {
        if ((num1 & mask) && (num2 & mask))
            printf("%d ", common_bit);
        common_bit++;
        num1 = num1 >> 1;
        num2 = num2 >> 1;
    }
    printf("\n");
}

int main(void)
{
    int pos;
    int result;
    unsigned int num1;
    unsigned int num2;

    printf("Enter first number : ");
    scanf("%d", &num1);

    printf("Enter second number : ");
    scanf("%d", &num2);

    display_common_on_bits(num1, num2);

    return 0;
}