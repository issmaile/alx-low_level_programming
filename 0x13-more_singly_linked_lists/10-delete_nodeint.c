#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of linked list
 * @head: head
 * @index: index of node to delete
 *
 * Return: success (1) - fail (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *previous, *next;

	previous = *head;

	if (index != 0)
	{
		for (i = 0; previous != NULL && i < index - 1; i++)
		{
			previous = previous->next;
		}
	}

	if (previous == NULL || (previous->next == NULL && index > 0))
		return (-1);

	next = previous->next;

	if (index == 0)
	{
		free(previous);
		*head = next;
	}
	else
	{
		previous->next = next->next;
		free(next);
	}

	return (1);
}
