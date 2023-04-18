#include "dog.h"
#include <stdlib.>

/**
 * free_dog - frees dog
 * @d: pointer to dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
