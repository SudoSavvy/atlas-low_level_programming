#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints a text according number
 *
 * Return: Always (Success)
 */

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 5)
	{
		printf("%d is greater than 5\n");
	}
	else if (n == 0)
	{
		printf("%d is zero\n")
	}
	else
	{
		printf("%d is negative\n")
	}

	return (0);
}
