#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - Return a pointer to a newly allocated space in memory,
 * which contains a copyof the string given as a parameter.
 *
 * @str: The input string duplicate.
 * 
 * Return: A pointer to the duplicated string on success. 
 */

char *_strdup(char *str)
{
/** check if 'str' is NULL */
if (str == NULL)
return (NULL);

/** Determine the ength of 'str' */
unsigned int length = 0;
while (str[length] != '\0')
length++;

/** Allocate memory for the new string */
char *copy = (char *)malloc((length +1) * sizeof(char));

/** Check if memory allocation was successful */
if (copy == NULL)
return (NULL);

/** copy the input string */
for (unsigned int i = 0; i <= legnth; i++)
copy[i] = str[i];

/** return the duplicated string */

return (copy);
}