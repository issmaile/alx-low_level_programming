#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: function that prints name
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
