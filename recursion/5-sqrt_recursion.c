#include "main.h"

/**
 *  _sqrt_recursion - finds the natural square root of a number recursively.
 * @n: The number.
 * 
 * Return: int
*/

int _sqrt_recursion(int n)
{
if (n == 0)
return (-1);
return(n * _sqrt_recursion(n - 1));
}
