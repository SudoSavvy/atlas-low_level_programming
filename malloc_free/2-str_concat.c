#include <stdlib.h>
#include "main.h"
#include <stddef.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated space in memory
 * containing the concatenated string, or NULL if memory
 * allocation fails.
 */
char *str_concat(char *s1, char *s2)
{
unsigned int length1 = 0, length2 = 0;
unsigned int i, j;
char *concat;

/** Treat NULL inputs as empty strings */
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

/** Determine the lengths s1 and s2 */
while (s1[length1] != '\0')
length1++;
while (s2[length2] != '\0')
length2++;

/** Allocate memory for the new string */
concat = (char *)malloc((length1 + length2 + 1) * sizeof(char));

/** Check if memory allocation was successful */
if (concat == NULL)
return (NULL);

/** Copy s1 into the new string */
for (i = 0; i < length1; i++)
concat[i] = s1[i];

/** Copy s2 into the new string */
for (j = 0; j < length2; j++)
concat[i + j] = s2[j];

/** Null-terminate the new string */
concat[i + j] = '\0';

/** Return the concatenated string */
return (concat);

}
