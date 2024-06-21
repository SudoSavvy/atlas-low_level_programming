#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

va_start(args, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(args, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);

printf("\n");
}

int main(void)
{
print_numbers(", ", 4, 1, 2, 3, 4); /* Should print: 1, 2, 3, 4 */
print_numbers(NULL, 3, 5, 10, 15);  /* Should print: 5 10 15 */
print_numbers(" - ", 2, 7, 8);      /* Should print: 7 - 8 */
return (0);
}
