/*
Write a recursive program accept number from user and return its reverse number.

Input : 523
Output : 325
*/

#include <stdio.h>

int reverse(int num)
{
    int digit;
    static int rev = 0;

    if (num)
    {
        digit = num % 10;
        rev = digit + (rev * 10);
        reverse(num / 10);
    }
    return rev;
}

int main(void)
{
    int num;
    int result;

    printf("Enter number : ");
    scanf("%d", &num);

    result = reverse(num);

    printf("Reversed number is : %d\n", result);

    return 0;
}