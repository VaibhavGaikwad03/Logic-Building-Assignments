/*
Write a program which displays all elements which are perfect from singly linear linked list.

Input : |11|->|28|->|17|->|41|->|6|->|89|->NULL
Output : 28  6

*/

#include <stdio.h>
#include "LinkedList.h"

void display_perfect(struct node *head)
{
    int sum = 0;

    while (head != NULL)
    {
        sum = 0;

        for (int i = 1; i <= head->data / 2; i++)
        {
            if (head->data % i == 0)
                sum += i;
        }

        if (sum == head->data)
            printf("%d ", head->data);
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

    display_perfect(first);

    return 0;
}