#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function given as param on each element of array.
 * @array: array to execute
 * @size: size of array
 * @action: poitner to the function to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
