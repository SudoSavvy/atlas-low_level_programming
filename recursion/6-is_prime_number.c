#include "main.h"

/**
 * is_divisible - Helper function to check if a number is divisible by another.
 * @n: The number to check.
 * @divisor: The divisor to check against.
 *
 * Return: 1 if @n is divisible by @divisor, 0 otherwise.
 */
int is_divisible(int n, int divisor)
{
    if (n % divisor == 0)
        return 1;
    if (divisor * divisor > n)
        return 0;
    return is_divisible(n, divisor + 1);
}

int is_prime_number(int n)
{
    if (n <= 1)
        return 0; // 0 and 1 are not prime numbers
    if (n == 2)
        return 1; // 2 is a prime number
    return !is_divisible(n, 2);
}
