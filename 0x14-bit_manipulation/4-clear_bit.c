#include "main.h"

/**
 * clear_bit - sets the value of a bit at given index to 0
 * @n: pointer to ulongint
 * @index: bit index
 *
 * Return: 1 success - -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int uint;

	if (index > 63)
		return (-1);

	uint = 1 << index;

	if (*n & uint)
		*n ^= uint;

	return (1);
}
