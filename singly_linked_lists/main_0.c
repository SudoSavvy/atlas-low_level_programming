#include "lists.h"
#include <stdio.h>

/**
 * main - entry point of the program
 *
 * Return: 0 on success
 */
int main(void)
{
    list_t tail = {"School", 6, NULL};
    list_t head = {"Best", 4, &tail};

    size_t count = print_list(&head);
    printf("Number of nodes: %lu\n", (unsigned long)count);

    return (0);
}
