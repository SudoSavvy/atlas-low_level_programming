#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int n = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	for (n = 0; src[n] != '\0'; n++, i++)
	{
		dest[i] = src[n];
	}

	return (dest);
}
