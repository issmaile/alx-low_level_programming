#include <stdio.h>

/**
 * main - multiplies 2 numbers
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 0 (success) - 1 (error)
 */

int main(int argc, char *argv[])
{
	int ret;

	if (argc == 3)
	{
		printf("%d\n", argv[1] * arv[2]);

		ret = 0;
	}
	else
	{
		printf("Error");
		
		ret = 1;
	}
	
	return ret;
}
