/*
Write a program which return largest element from singly linear linked list.

Input : |110|->|230|->|20|->|240|->|640|->NULL
Output : 20

*/

#include <stdio.h>
#include "LinkedList.h"

int minimum(struct node *head)
{
    if (head == NULL)
        return -1;

    int min = head->data;

    while (head != NULL)
    {
        if (head->data < min)
            min = head->data;
        head = head->next;
    }
    return min;
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

    result = minimum(first);

    if (result != -1)
        printf("\nSmallest elements is : %d.\n", result);
    else
        printf("\nERROR.\n");

    return 0;
}