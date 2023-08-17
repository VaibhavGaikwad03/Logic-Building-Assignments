/*
Write a recursive program accept string from user and count white spaces.

Input : HE llo WOr lD
Output : 3
*/

#include <stdio.h>

int count_white_spaces(char *str)
{
    static int count = 0;

    if (*str)
    {
        if (*str == ' ')
            count++;
        count_white_spaces(str + 1);
    }

    return count;
}

int main(void)
{
    int result;
    char str[20];

    printf("Enter string : ");
    scanf("%[^'\n']s", str);

    result = count_white_spaces(str);

    printf("Count of white spaces is : %d\n", result);

    return 0;
}