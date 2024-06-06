#include "main.h"

/**
 * is_prime_number - function returns 1 if the number is a prime number, and a 0 if anything else.
 * @n: The input number.
 *
 * Return: 0
*/

int is_prime_number(int n) {
    if (n <= 1) {
        return 0;
    }
    int i;
    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
