#include "main.h"
#include <stdio.h>
/**
 * Desc: _puts_recursion prints a string then a new line.
 * @s: the string
*/

 void _puts_recursion(char *s)
{
if (*s == '\0')
{
    putchar('\n') ;
    return;

}

putchar(*s);

_puts_recursion(s +1);
}

int main()
{
    char str[] = "hello";
    _puts_recursion(str);
    return (0);
}