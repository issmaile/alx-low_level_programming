#include "main.h"

/**
  * clear_bit - sets bit at given index to 0
  * @n: num to modify
  * @index: index
  *
  * Return: 1 (Success), -1 (error)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < sizeof(unsigned long int) * 8)
	{
		*n &= (~(1 << index));
		return (1);
	}

	return (-1);
}