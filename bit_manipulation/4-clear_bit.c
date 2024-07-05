#include <limits.h>
#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: A pointer to the number to be modified
 * @index: The index of the bit to clear, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(unsigned long int) * 8)
{
return (-1); /* Index out of bounds */
}

*n &= ~(1UL << index); /* Clear the bit at index to 0 */
return (1);
}
