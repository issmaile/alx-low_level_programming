#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog struct
 * @d: pointer to struct dog
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name ? d->name : "(nil)",
			d->age,
			d->owner ? d->owner : "(nil)");
}
