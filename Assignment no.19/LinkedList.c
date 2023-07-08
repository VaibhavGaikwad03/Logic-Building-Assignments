#include <stdio.h>
#include <stdlib.h>
#include "LinkedList.h"

void insert_last(struct node **head, int no)
{
    struct node *temp = NULL;
    struct node *new_node = NULL;

    new_node = (struct node *)malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Memory allocation FAILED");
        return;
    }

    new_node->data = no;
    new_node->next = NULL;

    if (*head == NULL)
    {
        *head = new_node;
        return;
    }

    temp = *head;

    while (temp->next != NULL)
        temp = temp->next;

    temp->next = new_node;
}