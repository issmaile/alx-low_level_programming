#include "main.h"

/**
  * _strlen - length of tring
  * @s: string
  *
  * Return: string len
  */
int _strlen(const char *s)
{
	int length = 0;

	while (s[length])
		length++;

	return (length);
}

/**
  * binary_to_uint - converts binary to uint
  * @b: binary string to onvert
  *
  * Return: converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length = 0, sum = 0, count = 0;

	if (b == NULL)
		return (0);

	length = _strlen(b);

	while (length--)
	{
		if (b[length] != 48 && b[length] != 49)
			return (0);

		if (b[length] == 49)
			sum += 1 << count;

		count++;
	}

	return (sum);
}
