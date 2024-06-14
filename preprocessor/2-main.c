#include <stdio.h>
/**
 * main - PRints the name of the file it was compiled from.
 *
 * Return: Always 0 (Success)
 */

/* int main(void) possible clashing main function fix */
{
printf("%s\n", __FILE__);
return (0);
}
