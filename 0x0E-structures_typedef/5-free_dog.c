#include "dog.h"
#include <stdio.h>
#include <stdlib.>

/**
 * free_dog - frees dog
 * @d: pointer to dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d);
	free(d->name);
	free(d->owner);
}
