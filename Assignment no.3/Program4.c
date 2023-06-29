#include<stdio.h>

void DisplayConvert(char cValue)
{   
    char upperChar = '\0';
    char lowerChar = '\0';


    if(upperChar = cValue - 32)
    {
        printf("%c",upperChar);
    }
    else if(lowerChar = cValue + 25)
    {
        printf("Inside else");
        printf("%c",lowerChar);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character : \n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}