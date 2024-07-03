#include <stdlib.h>
#include <string.h>
#incldue "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Pointer to the head pointer of the list.
 * @str: String to be duplicated and stored in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node, *current;

/* Allocate memory for new node */
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);

/* Duplicate the string using strdup */
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}

new_node->next = NULL; /* Initialize next pointer of new node */

/* If the list is empty, make the new node the head */
if (*head == NULL)
{
*head = new_node;
}
else
{
/* Traverse the list to find the last node */
current = *head;
while (current->next != NULL)
current = current->next;

/* Append the new node to the end of the list */
current->next = new_node;
}

return (new_node); /* Return the address of the new element */
}
