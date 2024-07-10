#include <stdio.h>
#include "lists.h"

int main(void)
{
    dlistint_t head;
    dlistint_t node1;
    dlistint_t node2;
    size_t n;

    head.n = 0;
    head.next = &node1;
    head.prev = NULL;

    node1.n = 1;
    node1.next = &node2;
    node1.prev = &head;

    node2.n = 2;
    node2.next = NULL;
    node2.prev = &node1;

    n = print_dlistint(&head);
    printf("-> %zu elements\n", n);
    return (0);
}
