#include "main.h"
#include <stdlib.h>
#include <string.h>
/** _calloc - Allocates memory for an array of nmemb elements 
 * of size bytes each.
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0
 * or if malloc fails. The memory is set to zero.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
if (nmemb == 0 || size == 0)
{
return (NULL);
}
unsigned int total_size = nmemb * size;

void *ptr = malloc(total_size);
if (ptr == NULL)
{
return (NULL);
}
memset(ptr, 0, total_size);

return (ptr);
}
