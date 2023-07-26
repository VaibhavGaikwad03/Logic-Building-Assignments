/*
Write a program which checks whether first and last bit is on or off. first bit means bit number 1 and last bit means bit number 32.
*/

#include <stdio.h>

int check_bit(unsigned int num)
{
    int result = 0;
    int mask = 0x80000001;
    
    result = mask & num;

    if (result == mask)
        return 1;
    return 0;
}

int main(void)
{
    unsigned int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = check_bit(num);

    if (result == 1)
        printf("Bit is on\n");
    else
        printf("Bit is off\n");

    return 0;
}