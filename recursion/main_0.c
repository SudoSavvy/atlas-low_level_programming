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