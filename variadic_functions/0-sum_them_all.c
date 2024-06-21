#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: The number of parameters passed to the function
 *
 * Return: The sum of all the parameters. If n == 0, return 0.
 */
int sum_them_all(const unsigned int n, ...)
{
va_list args;
unsigned int i;
int sum = 0;

if (n == 0)
return (0);

va_start(args, n);

for (i = 0; i < n; i++)
{
sum += va_arg(args, int);
}

va_end(args);

return (sum);
}

int main(void)
{
printf("%d\n", sum_them_all(4, 1, 2, 3, 4)); /* Should print 10 */
printf("%d\n", sum_them_all(0)); /* Should print 0 */
printf("%d\n", sum_them_all(3, 5, 10, -2)); /* Should print 13 */
return (0);
}
