#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: The hash table you want to add or update the key/value to
 * @key: The key. Key cannot be an empty string
 * @value: The value associated with the key. Value must be duplicated. Value can be an empty string
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    hash_node_t *new_node, *current_node;
    char *value_dup;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    value_dup = strdup(value);
    if (value_dup == NULL)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);
    current_node = ht->array[index];

    while (current_node != NULL)
    {
        if (strcmp(current_node->key, key) == 0)
        {
            free(current_node->value);
            current_node->value = value_dup;
            return (1);
        }
        current_node = current_node->next;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(value_dup);
        return (0);
    }

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        free(value_dup);
        return (0);
    }

    new_node->value = value_dup;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}
