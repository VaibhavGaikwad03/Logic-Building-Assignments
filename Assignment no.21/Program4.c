/*
Write a program which display smallest digits of all elements from singly linear linked list.

Input : |11|->|250|->|532|->|415|->NULL
Output : 1   0   2   1

*/

#include <stdio.h>
#include "LinkedList.h"

void display_smallest_digit(struct node *head)
{
    int min;
    int digit;

    while (head != NULL)
    {
        min = head->data % 10;

        while (head->data != 0)
        {
            digit = head->data % 10;
            if (digit < min)
                min = digit;
            head->data /= 10;
        }
        printf("%d   ", min);
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

    display_smallest_digit(first);

    return 0;
}