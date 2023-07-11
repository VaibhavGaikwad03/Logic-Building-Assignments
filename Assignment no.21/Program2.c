/*
Write a program which display all palindrome elements of singly linked list.

Input : |11|->|28|->|17|->|41|->|6|->|89|->NULL
Output : 11   6   414

*/

#include <stdio.h>
#include "LinkedList.h"

int reverse_digit(int no)
{
    int reverse = 0;

    while (no != 0)
    {
        reverse = (reverse * 10) + (no % 10);
        no /= 10;
    }
    return reverse;
}

void display_palindrome(struct node *head)
{
    while (head != NULL)
    {
        if (head->data == reverse_digit(head->data))
            printf("%d   ", head->data);
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

    display_palindrome(first);

    return 0;
}