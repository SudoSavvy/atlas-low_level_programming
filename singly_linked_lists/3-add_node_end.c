#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *current;
    size_t length = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return NULL;

    new_node->str = strdup(str);
    if (new_node->str == NULL)
    {
        free(new_node);
        return NULL;
    }

    while (str[length] != '\0')
        length++;

    new_node->next = NULL;

    if (*head == NULL)
        *head = new_node;
    else
    {
        current = *head;
        while (current->next != NULL)
            current = current->next;
        current->next = new_node;
    }

    printf("[%lu] %s\n", (unsigned long)length, new_node->str);

    return new_node;
}
