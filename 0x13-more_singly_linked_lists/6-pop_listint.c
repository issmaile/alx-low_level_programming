#include "lists.h"

/**
 * pop_listint - detelets the node of linked list
 * @head: p to p to head
 *
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int old_head_n;
	listint_t *new_head, *current;

	if (*head == NULL)
		return (0);

	current = *head;
	old_head_n = current->n;
	old_head = current->next;
	free(current);
	*head = new_head;

	return (old_head_n);
}
