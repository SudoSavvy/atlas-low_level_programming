#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to be printed between the strings.
 * @n: The number of strings passed to the function.
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *str;

va_start(args, n);

for (i = 0; i < n; i++)
{
str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);

if (separator != NULL && i < n - 1)
printf("%s", separator);
}

va_end(args);

printf("\n");
}

int main(void)
{
print_strings(", ", 4, "Jay", "Django", "Python", "C");
print_strings("; ", 3, "Hello", NULL, "World");
print_strings(NULL, 2, "Alice", "Bob");
return (0);
}
