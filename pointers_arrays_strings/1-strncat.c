#include "main.h"

/**
 * _strcat - Concatenates two strings but it can only us n amount of bytes
 * @dest: The destination string
 * @src: The source string
 *
 * Return: Pointer to the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	while (src[x] != '\0' && x < n;)
	{
		dest[i] = src[x];
        x++;
        i++;

	}
    dest[i] = '\0';

	return (dest);
}
