#include "main.h"

/**
 * binary_to_uint - converts a binary num to uint
 * @b: binary
 *
 * Return: uint
 */
unsigned int binary_to_uit(const char *b)
{
	int len, base_two;
	unsigned int uint = 0;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (b[len] != '1' && b[len] != 0)
			return (0);

		if (b[len] & 1)
			uint += base_two;
	}
	return (uint);
}
