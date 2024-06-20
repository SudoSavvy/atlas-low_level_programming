#include "main.h"

/**
 * array_iterator - executes a function given as a parameter
 *                  on each element of an array.
 * @array: the array to iterate over
 * @size: the size of the array
 * @action: a pointer to the function to use
 *
 * Description: This function takes an array of integers, its size,
 *              and a function pointer as parameters. It iterates
 *              over each element of the array and applies the given
 *              function to each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
