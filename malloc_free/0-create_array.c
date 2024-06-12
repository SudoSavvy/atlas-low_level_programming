#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: size of the array to create.
 * @c: char to initialize the array with.
 *
 * Return: pointer to the array, or NULL if it fails or if size is 0.
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

/* Checks if size is 0 */
if (size == 0)
return (NULL);

/* Allocate memory for array */
array = malloc(size * sizeof(char));

/* Check if malloc was successful */
if (array == NULL)
return (NULL);

/* Initialize the array with the character c */
for (i = 0; i < size; i++)
{
array[i] = c;
}

return (array);
}
