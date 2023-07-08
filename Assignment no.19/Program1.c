/*
Write a program which search the first occurrence of particular element from singly linear list.
Function should return position at which element is found.

Input : |10|->|20|->|30|->|40|->|50|->|30|->|70|->NULL
Input Element : 30
Output : 3

*/

#include <stdio.h>
#include "LinkedList.h"

int search_first_occurrence(struct node *head, int key)
{
    int pos = 0;

    while (head != NULL)
    {
        pos++;
        if (head->data == key)
            break;
        head = head->next;
    }
    return pos;
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

    printf("Enter the key to search : ");
    scanf("%d", &no);

    result = search_first_occurrence(first, no);

    printf("%d first occurred at position %d.", no, result);

    return 0;
}