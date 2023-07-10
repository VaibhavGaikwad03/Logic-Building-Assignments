/*
Write a program which displays all elements which are prime from singly linear linked list.

Input : |11|->|20|->|17|->|41|->|22|->|89|->NULL
Output : 11   17   41   89

*/

#include <stdio.h>
#include "LinkedList.h"

void display_prime(struct node *head)
{
    int count;

    while (head != NULL)
    {
        count = 0;

        for (int i = 2; i < head->data / 2; i++)
        {
            if (head->data % i == 0)
                count++;
        }

        if (count == 0)
            printf("%d  ", head->data);

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

    display_prime(first);

    return 0;
}