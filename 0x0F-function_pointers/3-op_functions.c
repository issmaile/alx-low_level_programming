#include "3-calc.h"

/**
 * op_add - a + b
 * @a: arg a
 * @b: arg b
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a - b
 * @a: arg a
 * @b: arg b
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a  - b);
}

/**
 * op_mul - a * b
 * @a: arg a
 * @b: arg b
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a / b
 * @a: arg a
 * @b: arg b
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - a % b
 * @a: arg a
 * @b: arg b
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
