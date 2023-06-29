#include<stdio.h>

void PrintEven(int iNo)
{   
    int iNumber = 0;
    int iAns = 0;

    if(iNo <= 0)
    {
        return;
    }


    for(iNumber = 1; iNumber <= iNo; iNumber++)
    {
        
        iAns = iAns - 2;
        
        printf("%d \n", -iAns);
        
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}