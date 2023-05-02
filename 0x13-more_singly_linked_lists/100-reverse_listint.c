#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: head
 *
 * Return: pointer to first node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = n;
	}

	*head = prev;
	return (*head);
}
