#include "main.h"
/**
 * 
 * 
*/

int main()
{
    char str[] = "hello";
    _puts_recursion(str);
    return (0);
}

int main(void)
{
    char str[] = "hello";
    _print_rev_recursion(str);
    write(1, '\n' ,1);

    return (0);
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

int main(void)
{
int base = 2;
int exponent = 3;
int result = _pow_recursion(base, exponent);

if (result == -1)
{
    printf("Error: exponent is negative.\n")
}
else
{
printf("%d^%d is %d\n", base, exponent, result);
}

return(0);
}