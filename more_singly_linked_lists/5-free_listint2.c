#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - Frees a listint_t linked list and sets the head to NULL.
* @head: Double pointer to the head of the list.
*/
void free_listint2(listint_t **head)
{
listint_t *current;

if (head == NULL)
return;

while (*head != NULL)
{
current = *head;
*head = (*head)->next;
free(current);
}

*head = NULL;
}
