#include "main.h"

/**
 * set_bit - set the value of a bit at given index to 1
 * @n: pointer to ulongint
 * @index: index of bit
 *
 * Return: 1 success / -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int uint;

	if (index > 63)
		return (-1);

	uint = 1 << index;
	*n = (*n | uint);

	return (1);
}
