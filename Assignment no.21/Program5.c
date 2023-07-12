/*
Write a program which display largest digits of all elements from singly linear linked list.

Input : |11|->|250|->|532|->|419|->NULL
Output : 1   5   5   9

*/

#include <stdio.h>
#include "LinkedList.h"

void display_largest_digit(struct node *head)
{
    int max;
    int digit;

    while (head != NULL)
    {
        max = head->data % 10;

        while (head->data != 0)
        {
            digit = head->data % 10;
            if (digit > max)
                max = digit;
            head->data /= 10;
        }
        printf("%d   ", max);
        head = head->next;
    }
}

int main(void)
{
    int no;
    int cnt;
    int size;
    struct node *first = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("Enter the elements :\n");
    for (cnt = 1; cnt <= size; cnt++)
    {
        scanf("%d", &no);
        insert_last(&first, no);
    }

    display_largest_digit(first);

    return 0;
}