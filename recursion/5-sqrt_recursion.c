#include "main.h"

/**
 *  _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to find the square root of.
 * 
 * Return: The natural square root, or -1 if no natural square root exists. 
*/
int _sqrt_recursion(int n)
{
if (n < 0)

return(-1);

return( n * _sqrt_recursion(n - 1));
}