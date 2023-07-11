/*
Write a program which return second largest element from singly linear linked list.

Input : |110|->|230|->|320|->|240|->NULL
Output : 240

*/

#include <stdio.h>
#include "LinkedList.h"

int maximum(struct node *head)
{
    int max = head->data;

    if (head == NULL)
        return -1;

    while (head != NULL)
    {
        if (head->data > max)
            max = head->data;
        head = head->next;
    }
    return max;
}

int second_largest(struct node *head)
{
    int max;
    int sec_max = head->data;

    if (head == NULL)
        return -1;

    max = maximum(head);

    while (head != NULL)
    {
        if (head->data > sec_max && head->data != max)
            sec_max = head->data;
        head = head->next;
    }
    return sec_max;
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

    result = second_largest(first);

    if (result != -1)
        printf("\nSecond largest elements is : %d.\n", result);
    else
        printf("\nERROR.\n");

    return 0;
}