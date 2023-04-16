#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min number of coins to make change for a sum of money.
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 success - 1 error
 */

int main(int argc, char *argv[])
{
	int cents = 0;
	int rest = 0;
	int coins[] = {1, 2, 5, 10, 25};
	int i = 0;
	int quotient = 0;
	int change = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	rest = cents;

	for (i = 4; i >= 0; i--)
	{
		if (rest >= coins[i])
		{
			quotient = rest / coins[i];
			change += quotient;

			rest %= coins[i];
		}

		if (rest == 0)
		{
			printf("%d\n", change);
			return (0);
		}
	}
	return (0);
}
