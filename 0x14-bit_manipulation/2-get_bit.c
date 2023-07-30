#include "main.h"

/**
  * get_bit - gets the bit at given indwex
  * @n: the uint to find in index
  * @index: index of bit to find
  *
  * Return: bit at given index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cur_i = 0;

	while (n)
	{
		if (index == cur_i)
        {
            return (n % 2 ? 1 : 0);
        }

		n /= 2;
		cur_i++;
    }

    return (cur_i < index && index < 63 ? 0 : -1);
}
