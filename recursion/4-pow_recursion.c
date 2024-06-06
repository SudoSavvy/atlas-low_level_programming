#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: base integer.
 * @y: raised integer.
 *
 * Return: the value of x raised to the power of y, or -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return (-1);

    if (y == 0)
        return (1);

    y--;
    return (x * (_pow_recursion(x, y)));
}
