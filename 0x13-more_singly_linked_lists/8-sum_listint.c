#include "lists.h"

/**
 * sum_listint - returns the sum of all (n)s of a linked list
 * @head: head
 *
 * Return: all (n)s summed
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
