#include "main.h"
#include <unistd.h>
#include <stdio.h>
/**
 * 
 * 
*/

int factorial(int n)
{
    if (n < 0)
    {
        return (-1);
    }
    if (n == 0)
    {
        return (1);
    }
    return (n * factorial(n - 1));
}

int main(void)
{
    int num = 5;
    int result = factorial(num);

    if (result == -1)
    {
        printf("Error: factorial of a negative number doesn't exist.\n");
    }
    else
    {
        printf("Factorial of a %d is %d\n", num, result);
    }

    return(0);
}