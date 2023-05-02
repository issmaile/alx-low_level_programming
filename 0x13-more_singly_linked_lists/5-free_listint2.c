#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to head pointer
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, current;

	if (head != NULL)
	{
		current = *head;
		while ((tmp = current) != NULL)
		{
			curr = curr->next;
			free(tmp);
		}
		*head = NULL;
	}
}
