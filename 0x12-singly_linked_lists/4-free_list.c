#include "main.h"

/**
 * free_list - frees list
 * @head: list head
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current;

	current = head;
	while (current != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
		current = head;
	}
}
