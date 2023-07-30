#include "main.h"

/**
  * set_bit - set bit at given index to 1
  * @n: num to modify
  * @index: index
  *
  * Return: 1 (Success), -1 (error)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	return ((*n |= 1 << index) ? 1 : -1);
}