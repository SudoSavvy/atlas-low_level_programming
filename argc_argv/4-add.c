#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return 0;
	}


	for (i = 1; i < argc; i++)
	{

		int num = atoi(argv[i]);

		if (num == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return 1;
		}

		if (num < 0)
		{
			printf("Error\n");
			return 1;
		}

		sum += num;
	}

	printf("%d\n", sum);

	return 0;
}
