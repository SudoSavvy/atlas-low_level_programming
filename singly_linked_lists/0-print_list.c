#include <stdio.h>
#include <stdlib.h>

/* Define the list_t structure*/
typedef struct list_s
{
    char *str;
    struct list_s *next;
} list_t;

/* Function to print all elements of the list and return the number of nodes*/
size_t print_list(const list_t *h)
{
    size_-t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%lu] %s\n", strlen(h->str), h->str);

        count++;
        h=h->next;
    }

    return (count);
}