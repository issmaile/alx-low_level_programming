#include "lists.h"

/**
 * print_list - prints all elements of a list_t list.
 * @h: the list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 1;
	list_t *current_node = h;

	if (!h)
		return (0);
	if (!h->str)
	{
		printf("[0] (nil)\n");
		return (0);
	}
	while (current_node->next)
	{
		count++;
		current_node = current_node->next;
	}

	return (count);
}
