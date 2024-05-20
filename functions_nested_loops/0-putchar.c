#include <stdio.h>
#include "main.h"

/**
 * main - the entry point to my code
 *
 * Description: this code should print '_putchar' followed by a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char *c;
	int i;

	c = "_putchar";
	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');

	return (0);
}
