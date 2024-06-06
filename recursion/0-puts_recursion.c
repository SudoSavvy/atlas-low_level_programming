#include "main.h"
#include <unistd.h>
/**
 * Desc: _puts_recursion prints a string then a new line.
 * @s: the string
*/

 void _puts_recursion(char *s)
{
if (*s == '\0')
{ 
    write(1,"\n", 1);
    return;

}

write(1, s, 1);

_puts_recursion(s +1);
}
