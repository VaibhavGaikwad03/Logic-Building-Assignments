/*
Write a program which display product of all digits of all elements from singly linear linked list. (Don't consider 0)

Input : |11|->|20|->|32|->|41|->NULL
Output : 1   2   6   4

*/

#include <stdio.h>
#include "LinkedList.h"

void display_product(struct node *head)
{
    int mult;
    int digit;

    while (head != NULL)
    {
        mult = 1;

        while (head->data != 0)
        {
            if ((digit = (head->data % 10)) != 0)
                mult *= digit;
            head->data /= 10;
        }
        printf("%d   ", mult);
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

    display_product(first);

    return 0;
}