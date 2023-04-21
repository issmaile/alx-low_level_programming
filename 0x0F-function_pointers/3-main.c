#include "3-calc.h"

/**
 * main - main function
 * @argc: arg count
 * @argv: arg vector
 *
 * Return: 98 - wrong number of args
 * 99 - invalid operator
 * 100 - deviding by 0
 */
int main(int argc, char *argv[])
{
	int a;
	char* op;
	int b;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);

	operation = get_op_func(op);

	if (operation == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", operation(a, b));

	return (0);
}
