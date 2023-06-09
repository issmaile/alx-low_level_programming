#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array pointer
 * @size: array size
 * @cmp: pointer to function to be used
 *
 * Return: index of int inside an array
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
