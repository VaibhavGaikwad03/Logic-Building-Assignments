/*
Write a program which return largest element from singly linear linked list.

Input : |110|->|230|->|320|->|240|->NULL
Output : 320

*/

#include <stdio.h>
#include "LinkedList.h"

int maximum(struct node *head)
{
    if (head == NULL)
        return -1;

    int max = head->data;

    while (head != NULL)
    {
        if (head->data > max)
            max = head->data;
        head = head->next;
    }
    return max;
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

    result = maximum(first);

    if (result != -1)
        printf("\nLargest elements is : %d.\n", result);
    else
        printf("\nERROR.\n");

    return 0;
}