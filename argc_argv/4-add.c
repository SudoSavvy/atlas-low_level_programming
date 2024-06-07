#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point. Adds positive numbers passed as arguments.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int argc, char *argv[])
{
    int i, j, sum = 0;

    if (argc == 1)
    {
        printf("0\n");
        return (EXIT_SUCCESS);
    }

    for (i = 1; i < argc; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (EXIT_FAILURE);
            }
        }
        sum += atoi(argv[i]);
    }

    printf("%d\n", sum);
    return (EXIT_SUCCESS);
}
