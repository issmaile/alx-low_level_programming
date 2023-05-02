#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at given position
 * @head: p to p to head
 * @idx: index to insert in
 * @n: n data
 *
 * Return: the address of the new node - NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *h;

	h = *head;

	h = get_nodeint(idx - 1);

	if (h == NULL && idx != 0)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		new_node->next = h->next;
		h->next = new_node;
	}

	return (new_node);
}
