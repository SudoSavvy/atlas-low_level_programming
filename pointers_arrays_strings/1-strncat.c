#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to be used from src
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	while (src[x] != '\0' && x < n)
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
