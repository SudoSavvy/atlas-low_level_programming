#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 *
 * @str: The input string to duplicate.
 *
 * Return: A pointer to the duplicated string on success.
 *         NULL if str is NULL or if insufficient memory was available.
 */
char *_strdup(char *str)
{
	unsigned int length = 0;
	char *copy;
	unsigned int i;

	/* Check if 'str' is NULL */
	if (str == NULL)
		return (NULL);

	/* Determine the length of 'str' */
	while (str[length] != '\0')
		length++;

	/* Allocate memory for the new string */
	copy = (char *)malloc((length + 1) * sizeof(char));

	/* Check if memory allocation was successful */
	if (copy == NULL)
		return (NULL);

	/* Copy the input string */
	for (i = 0; i <= length; i++)
		copy[i] = str[i];

	/* Return the duplicated string */
	return (copy);
}
