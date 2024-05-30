#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: Pointer to the memory area to be filled
 * @b: The constant byte to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: Pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n-- > 0) {
        *ptr++ = b;
    }
    return s;
}
