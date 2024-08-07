#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int bit_size = sizeof(n) * 8;
	int leading_zero = 1;
	int i;

	for (i = bit_size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			putchar('0');
		}
	}

	if (leading_zero)
	{
		putchar('0');
	}
}

