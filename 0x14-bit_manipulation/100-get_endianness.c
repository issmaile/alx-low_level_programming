#include "main.h"

/**
 * get_endianness - check the endianness
 *
 * Return: big endian 0 - little endian 1
 */
int get_endianness(void)
{
	unsigned int a;
	char *chr;

	a = 1;
	chr = (char *) &a;

	return ((int)*chr);
}
