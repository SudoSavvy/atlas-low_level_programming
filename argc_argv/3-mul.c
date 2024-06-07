#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point for the program.
 * @argc: NUmber of arguments passed to the prorgram.
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error.
*/
int main(int argc, char *argv[])
{
int num1, num2, result;
if (argc != 3)
{
printf("Error\n");
return (1);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = (int)num1 * (int)num2;

printf("%d\n", result);

return (0);
}
