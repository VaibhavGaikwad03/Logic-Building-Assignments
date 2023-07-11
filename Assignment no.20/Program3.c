/*
Write a program which returns addition of all even elements from singly linear linked list.

Input : |10|->|20|->|32|->|41|->NULL
Output : 52

*/

#include <stdio.h>
#include "LinkedList.h"

int add_even(struct node *head)
{
    int sum = 0;

    while (head != NULL)
    {
        if (head->data % 2 == 0)
            sum += head->data;
        head = head->next;
    }

    return sum;
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

    result = add_even(first);

    printf("\nAddition of all even elements is : %d.\n", result);

    return 0;
}