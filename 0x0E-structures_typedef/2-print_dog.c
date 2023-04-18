#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print dog struct
 * @d: pointer to struct dog
 *
 * Return: none
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "NIL");
		printf("age: %d\n", d->age ? d->age : "NIL");
		printf("Owner: %s\n", d->owner ? d->owner : "NIL");
	}
}
