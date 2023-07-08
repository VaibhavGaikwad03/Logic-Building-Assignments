/*
Write a program which search the first occurrence of particular element from singly linear list.
Function should return position at which element is found.

Input : |10|->|20|->|30|->|40|->NULL
Output : 100

*/

#include <stdio.h>
#include "LinkedList.h"

int addition(struct node *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum += head->data;
        head = head->next;
    }

    return sum;
}

int main(void)
{
    int no;
    int cnt;
    int size;
    int result;
    struct node *first = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("Enter the elements :\n");
    for (cnt = 1; cnt <= size; cnt++)
    {
        scanf("%d", &no);
        insert_last(&first, no);
    }

    result = addition(first);

    printf("\nAddition of all elements is : %d.\n", result);

    return 0;
}