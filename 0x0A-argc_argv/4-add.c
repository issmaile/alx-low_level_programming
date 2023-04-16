#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - print the sum of numbers input
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 (success) - 1 (error)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i;
	int d;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (d = 0; argv[i][d] != '\0'; d++)
		{
			if (!isdigit(argv[i][d]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
