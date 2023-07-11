/*
Write a program which display addtion of digits of element from singly linear linked list.

Input : |110|->|230|->|20|->|240|->|640|->NULL
Output : 2  5  2  6  10

*/

#include <stdio.h>
#include "LinkedList.h"

void addition_of_digits(struct node *head)
{
    int sum;
    if (head == NULL)
        return;

    while (head != NULL)
    {
        sum = 0;

        while (head->data != 0)
        {
            sum += head->data % 10;
            head->data = head->data / 10;
        }
        printf("%d   ", sum);
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

    addition_of_digits(first);

    return 0;
}