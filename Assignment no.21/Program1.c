/*
Write a program which reverse each element of singly linked list.

Input : |11|->|28|->|17|->|41|->|6|->|89|->NULL
Output : |11|->|82|->|71|->|14|->|6|->|98|->NULL

*/

#include <stdio.h>
#include "LinkedList.h"

void reverse_digits(struct node *head)
{
    int temp;
    int digit = 0;
    int reverse;

    while (head != NULL)
    {
        temp = head->data;
        reverse = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            reverse = reverse * 10 + digit;
            temp /= 10;
        }
        head->data = reverse;
        head = head->next;
    }
}

int main(void)
{
    int no;
    int cnt;
    int size;
    struct node *temp = NULL;
    struct node *first = NULL;

    printf("Enter the number of elements : ");
    scanf("%d", &size);

    printf("Enter the elements :\n");
    for (cnt = 1; cnt <= size; cnt++)
    {
        scanf("%d", &no);
        insert_last(&first, no);
    }

    reverse_digits(first);

    printf("\nReveresed elements are : \n");

    temp = first;

    while (temp != NULL)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    return 0;
}