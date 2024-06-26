#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Target string
 * @src: String to be copied
 * @n: Number of characters to be copied
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
