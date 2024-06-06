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
if (maybe * maybe == perfect)
{
return (maybe);
}

if (maybe * maybe > perfect)
{
return (-1);
}

return (_sqfinder(maybe + 1, perfect));
}

/**
 * _sqrt_recursion - Finds the square root of an integer.
 * @n: Given integer.
 *
 * Return: The square root of @n.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
{
return (-1);
}

return (_sqfinder(1, n));
}
