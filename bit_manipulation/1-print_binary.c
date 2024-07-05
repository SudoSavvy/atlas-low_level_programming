#include <stdio.h>

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

/**
 * main - Entry point for testing the print_binary function
 * Return: 0 on success
 */
int main(void)
{
	unsigned long int num = 10;

	printf("Binary representation of %lu: ", num);
	print_binary(num);
	putchar('\n');

	return (0);
}
