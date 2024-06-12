#include "main.h"

/**
 *
 *
 *
 */

char *create_array(unsigned int size, char c)
{
    unsigned int i = 0;
    char *array = NULL;

    /** Checks if size is 0 */
    if (size == 0)
        return (NULL);

    /** Allocate memory for array */
    array = malloc(sizeof(char));

    /**check if malloc was successful */
    if (array == NULL)
        return (NULL);
    
    /**initialise the array with the character c */
    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }

    array[size] = '\0';
    return (array);
}