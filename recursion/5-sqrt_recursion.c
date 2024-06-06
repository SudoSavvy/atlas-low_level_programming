#include "main.h"

/**
 * _sqfinder - Finds the square root of a number using recursion.
 * @maybe: Maybe natural root, maybe not.
 * @perfect: Perfect square.
 *
 * Return: The square root if @maybe is a natural square root, -1 if not.
 */
int _sqfinder(int maybe, int perfect)
{
	if ((maybe * maybe) == perfect) /* If @maybe is a natural square root */
	{
		return (maybe); /* Return it */
	}

	if ((maybe * maybe) > perfect) /* If @maybe is not a natural square root */
	{
		return (-1); /* Return error */
	}

	return (_sqfinder(perfect, maybe + 1)); /* Recurse through, incrementing @maybe */
}

/**
 * _sqrt_recursion - Finds the square root of an integer.
 * @n: Given integer.
 *
 * Return: The square root of @n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0) /* Error checking for negative numbers */
	{
		return (-1);
	}

	return (_sqfinder(1, n)); /* Start recursion */
}
